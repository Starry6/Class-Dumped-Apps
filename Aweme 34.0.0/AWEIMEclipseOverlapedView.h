@interface AWEIMEclipseOverlapedView : UIView
@property (nonatomic) NSArray imgViewArr;
@property (nonatomic) AWEIMEclipseOverlapedViewConfig config;
- (void)__addKVO;
- (void)__setupUIWithConfig:;
- (void)__lastItemTapped:;
- (void)setImgViewArr:;
- (void)__updateImages;
- (id)imgViewArr;
- (id)getSizeForView;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
@end
