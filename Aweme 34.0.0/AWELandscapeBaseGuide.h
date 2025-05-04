@interface AWELandscapeBaseGuide : NSObject
@property (nonatomic) UIView targetView;
@property (nonatomic) AWELandscapePageContext pageContext;
- (id)initWithTargetView:pageContext:;
- (id)targetView;
- (void)setTargetView:;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
@end
