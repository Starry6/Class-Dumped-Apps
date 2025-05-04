@interface AWEPublishReplaceMusicTask : AWEPublishCommonTask
@property (nonatomic) NSError error;
@property (nonatomic) AWEPublishReplaceMusicCreateModelStage createModelStage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)publishStage:didChangeStatus:userInfo:;
- (id)createModelStage;
- (void)trackEventPublishDone;
- (void)setCreateModelStage:;
- (void)showReplaceMusicPublishingAlert;
- (void)trackEventPublishFailWithError:;
- (void)resume;
- (void)execute;
- (id)initWithModel:;
- (void)setError:;
- (void).cxx_destruct;
- (id)error;
@end
