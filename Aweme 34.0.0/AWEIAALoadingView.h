@interface AWEIAALoadingView : UIView
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addSubviews;
- (void)willMoveToSuperview:;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
@end
