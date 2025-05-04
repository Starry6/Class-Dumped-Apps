@interface AWELeftEmptyView : AWEPlayInteractionLeftElement
@property (nonatomic) UIView emptyView;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)appear;
- (id)emptyView;
- (void)setEmptyView:;
+ (BOOL)shouldActiveWithModel:context:;
@end
