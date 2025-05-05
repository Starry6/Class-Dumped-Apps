@interface CSJSplashBottomView : UIView
@property (nonatomic) CSJMaterialMeta materialMeta;
@property (nonatomic) CSJSplashBottomBaseComponentView splashBottomView;
@property (nonatomic) @? actionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)ADViewDidVisible;
- (Class)bottomMaskClass;
- (id)bottomMaskFrameWithCoverFrame:;
- (void)buildUpView;
- (id)initWithMaterialMeta:;
- (id)materialMeta;
- (void)setMaterialMeta:;
- (void)setSplashBottomView:;
- (id)splashBottomView;
- (void)layoutSubviews;
- (id)actionBlock;
- (void)startAnimating;
- (void).cxx_destruct;
- (void)setActionBlock:;
@end
