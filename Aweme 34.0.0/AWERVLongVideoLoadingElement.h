@interface AWERVLongVideoLoadingElement : AWERelatedVideoPlayBaseElement
@property (nonatomic) AWEUILoadingView longVideoLoadingView;
@property (nonatomic) BOOL isLongVideoLoading;
- (void)initializeElement;
- (void)bindEvent;
- (void)switchLoadingModel:;
- (void)setIsLongVideoLoading:;
- (BOOL)isLongVideoLoading;
- (id)longVideoLoadingView;
- (void)setLongVideoLoadingView:;
- (void).cxx_destruct;
- (void)reset;
@end
