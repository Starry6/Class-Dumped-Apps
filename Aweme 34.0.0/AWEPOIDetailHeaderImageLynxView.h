@interface AWEPOIDetailHeaderImageLynxView : AWEPOIDetailHeaderImageComponentBaseView
@property (nonatomic) AWEPOILynxContainerView lynxView;
@property (nonatomic) BOOL hasInitLynxViewSize;
@property (nonatomic) double initScrollViewOffset;
@property (nonatomic) AWEPOIDetailNGHeaderImageComponentViewModel headerImageVM;
@property (nonatomic) UIView contentView;
@property (nonatomic) double lastScrollEventTime;
@property (nonatomic) double height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxView;
- (void)setLynxView:;
- (void)updateViewModel:;
- (void)pageDidScroll:;
- (void)cubeView:viewDidChangeContentSize:;
- (id)extraParamsForLynx;
- (void)updateComponentViewAlpha:;
- (id)headerImageVM;
- (void)setHeaderImageVM:;
- (id)buildLynxContainerViewWithCubeModel:;
- (void)setHasInitLynxViewSize:;
- (BOOL)hasInitLynxViewSize;
- (double)initScrollViewOffset;
- (void)setInitScrollViewOffset:;
- (id)getPreloadView:;
- (id)init;
- (void)setHeight:;
- (id)initWithFrame:;
- (id)contentView;
- (void)setLastScrollEventTime:;
- (void).cxx_destruct;
- (void)setContentView:;
- (double)lastScrollEventTime;
- (double)height;
@end
