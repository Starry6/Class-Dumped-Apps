@interface IESECLLWrapperView : IESECLLPassthroughView
@property (nonatomic) UIView wrappedView;
- (id)initWithView:uiUpdater:;
- (void)updateUIWithModel:;
- (id)initWithView:;
- (void)layoutSubviews;
- (id)wrappedView;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)setWrappedView:;
@end
