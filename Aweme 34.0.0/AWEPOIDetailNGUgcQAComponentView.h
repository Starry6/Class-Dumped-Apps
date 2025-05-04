@interface AWEPOIDetailNGUgcQAComponentView : DitoComponentView
@property (nonatomic) AWEPOIDetailFeedUgcQaFloatingView ugcQaView;
@property (nonatomic) AWEPOIDetailNGUgcQAComponentViewModel vm;
- (void)updateViewModel:;
- (void)bindActionAndState;
- (id)vm;
- (void)setVm:;
- (id)ugcQaView;
- (void)setUgcQaView:;
- (void)updateQAViewPositionIfNeed;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setupUI;
@end
