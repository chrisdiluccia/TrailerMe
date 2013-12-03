//
//  AddHorrorThemeViewController.h

#import "ThemeSelectionViewController.h"
#import "RecordVideoViewController.h"

@interface AddHorrorThemeViewController : ThemeSelectionViewController

@property (weak, nonatomic) IBOutlet UITextField *subTitle1;
- (IBAction)loadAsset:(id)sender;
- (IBAction)generateOutput:(id)sender;

@end