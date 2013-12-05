//
//  RecordVideoViewController.h

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <MobileCoreServices/UTCoreTypes.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface RecordVideoViewController : UIViewController <UIImagePickerControllerDelegate,UINavigationControllerDelegate>

- (BOOL) startCameraControllerFromViewController: (UIViewController*) controller
                                   usingDelegate: (id <UIImagePickerControllerDelegate,
                                                   UINavigationControllerDelegate>) delegate;
- (void)video: (NSString *) videoPath didFinishSavingWithError: (NSError *) error contextInfo:(void*)contextInfo;
@end
