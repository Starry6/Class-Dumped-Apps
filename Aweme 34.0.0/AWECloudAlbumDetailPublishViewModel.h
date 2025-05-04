@interface AWECloudAlbumDetailPublishViewModel : NSObject
@property (nonatomic) ACCCameraSubscription subscription;
@property (nonatomic) @? publishTrigger;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)publishAssets:;
- (void)notifyPublishShouldExitSelectMode;
- (void)setPublishTrigger:;
- (id)publishTrigger;
- (id)subscription;
- (void)setSubscription:;
- (void).cxx_destruct;
- (void)addSubscriber:;
@end
