@interface AWEIMChatCellColorRingPresenter : AWEIMCellPresenterBase
@property (nonatomic) AFDStoryGradientConfig config;
@property (nonatomic) <AWEIMChatCellColorRingViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateView:;
- (long long)componentViewPosition;
- (id)createViewInCell:;
- (void)didClickStoryRing:;
- (void)setConfig:;
- (id)delegate;
- (id)config;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
