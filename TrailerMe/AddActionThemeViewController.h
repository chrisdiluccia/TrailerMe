//
//  AddActionThemeViewController.h

#import "ThemeSelectionViewController.h"

@interface AddActionThemeViewController : ThemeSelectionViewController

@property (weak, nonatomic) IBOutlet UITextField *subTitle1;
- (IBAction)loadAsset:(id)sender;
- (IBAction)generateOutput:(id)sender;

@end