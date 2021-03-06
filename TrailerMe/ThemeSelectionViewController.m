//
//  ThemeSelectionViewController.m

#import "ThemeSelectionViewController.h"
#import "RecordVideoViewController.h"
#import "AddHorrorThemeViewController.h"
#import "AddActionThemeViewController.h"
#import "AddThrillerThemeViewController.h"

@implementation ThemeSelectionViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([[segue identifier] isEqualToString:@"Push Horror Theme VC"])
    {
        // Get destination view
        AddHorrorThemeViewController *addHorrorThemeViewController = [segue destinationViewController];
        
        // Pass the information to your destination view
        [addHorrorThemeViewController setMoviePath:self.moviePath];
    }
    else if ([[segue identifier] isEqualToString:@"Push Action Theme VC"])
    {
        // Get destination view
        AddActionThemeViewController *addActionThemeViewController = [segue destinationViewController];
        
        // Pass the information to your destination view
        [addActionThemeViewController setMoviePath:self.moviePath];
    }
    else if ([[segue identifier] isEqualToString:@"Push Thriller Theme VC"])
    {
        // Get destination view
        AddThrillerThemeViewController *addThrillerThemeViewController = [segue destinationViewController];
        
        // Pass the information to your destination view
        [addThrillerThemeViewController setMoviePath:self.moviePath];
    }
}

@end
