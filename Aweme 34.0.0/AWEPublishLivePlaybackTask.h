@interface AWEPublishLivePlaybackTask : AWEPublishCommonTask
@property (nonatomic) NSError error;
@property (nonatomic) AWEPublishCreateModelStage createModelStage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)publishStage:didChangeStatus:userInfo:;
- (void)trackEventWithStage:status:;
- (id)createModelStage;
- (void)trackEventPublishDone;
- (void)setCreateModelStage:;
- (void)showLivePlaybackPublishingAlert;
- (void)trackEventPublishFail;
- (void)execute;
- (id)initWithModel:;
- (void)setError:;
- (void).cxx_destruct;
- (id)error;
@end
