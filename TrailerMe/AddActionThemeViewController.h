//
//  AddActionThemeViewController.h

#import "ThemeSelectionViewController.h"

@interface AddActionThemeViewController : ThemeSelectionViewController

@property (weak, nonatomic) IBOutlet UITextField *subTitle1;
@property(nonatomic, strong) AVAsset *videoAsset;
@property(nonatomic, retain) NSString *moviePath;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activity;

- (IBAction)loadAsset:(id)sender;
- (IBAction)generateOutput:(id)sender;

- (BOOL)startMediaBrowserFromViewController:(UIViewController*)controller usingDelegate:(id)delegate;
- (void)exportDidFinish:(AVAssetExportSession*)session;
- (void)applyVideoEffectsToComposition:(AVMutableVideoComposition *)composition size:(CGSize)size;
- (void)videoOutput;

@end