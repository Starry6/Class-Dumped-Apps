@interface AWESearchUniversalManager : NSObject
@property (nonatomic) BOOL concernFullVCAppear;
@property (nonatomic) BOOL nearbyVCAppear;
@property (nonatomic) BOOL nearbyFullVCAppear;
@property (nonatomic) UIView<AWEPublishProgressViewProtocol> progressView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPublishProgressViewHiden:WithAnimation:;
- (void)setNearbyVCAppear:;
- (BOOL)nearbyVCAppear;
- (void)setNearbyFullVCAppear:;
- (BOOL)nearbyFullVCAppear;
- (void)setConcernFullVCAppear:;
- (BOOL)concernFullVCAppear;
- (void)recordNearbyVCAppearStatus:;
- (BOOL)nearbyVCAppearStatus;
- (void)recordNearbyFullVCAppearStatus:;
- (BOOL)nearbyFullVCAppearStatus;
- (void)recordConcernFullVCAppearStatus:;
- (BOOL)concernFullVCAppearStatus;
- (void)setupUploadProgressViewDisplayType:;
- (id)progressView;
- (void)setProgressView:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
