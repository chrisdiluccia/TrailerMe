//
//  AddComedyThemeViewController.h

#import "ThemeSelectionViewController.h"

@interface AddComedyThemeViewController : ThemeSelectionViewController

@property (weak, nonatomic) IBOutlet UITextField *subTitle1;
- (IBAction)loadAsset:(id)sender;
- (IBAction)generateOutput:(id)sender;

@end
