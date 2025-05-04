@interface AWECloudAlbumDetailDataViewModel : NSObject
@property (nonatomic) ACCCameraSubscription subscription;
@property (nonatomic) EcAlbum album;
@property (nonatomic) EcTaskStatus status;
@property (nonatomic) EcTaskProgress progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addAlbumSubscriber:;
- (void)addTaskSubscriber:;
- (BOOL)uploadTaskExists;
- (void)notifyDidChangeAlbum:;
- (void)notifyDidChangeStatus:;
- (void)notifyDidChangeProgress:;
- (void)notifyDidChangeItems:;
- (id)subscription;
- (void)setSubscription:;
- (id)progress;
- (void).cxx_destruct;
- (id)status;
- (id)album;
@end
