@interface AWECloudAlbumDetailDownloadViewModel : NSObject
@property (nonatomic) ACCCameraSubscription subscription;
@property (nonatomic) @? downloadTrigger;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)notifyDownloadShouldExitSelectMode;
- (void)setDownloadTrigger:;
- (id)downloadTrigger;
- (id)subscription;
- (void)setSubscription:;
- (void).cxx_destruct;
- (void)addSubscriber:;
- (void)downloadAssets:;
@end
