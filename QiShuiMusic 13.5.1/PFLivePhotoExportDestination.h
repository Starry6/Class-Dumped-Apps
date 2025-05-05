@interface PFLivePhotoExportDestination : NSObject
@property (nonatomic) NSURL photoURL;
@property (nonatomic) NSURL videoURL;
- (id)videoURL;
- (id)photoURL;
- (void).cxx_destruct;
- (id)initWithPhotoURL:videoURL:;
+ (id)destinationWithPhotoURL:videoURL:;
@end
