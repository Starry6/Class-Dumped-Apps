@interface AWEIMMessageBulletPresenter : AWEIMUIViewPresenter
@property (nonatomic) IESIMBulletContainerContext bulletContext;
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (void)setBulletContext:;
- (id)bulletContext;
- (void)updateBulletData;
- (void).cxx_destruct;
@end
