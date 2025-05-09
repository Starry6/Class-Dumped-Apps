@interface AWEECOMIMDynamicCardBaseElementView : UIView
@property (nonatomic) UITapGestureRecognizer elementTap;
@property (nonatomic) BDPCDDynamicCardCustomActionModel elementTapActionModel;
@property (nonatomic) BDPCDDynamicCardUIElementModel elementModel;
@property (nonatomic) @? reloadCallback;
@property (nonatomic) @? fetchAndReloadCallback;
@property (nonatomic) @? heightChangeCallback;
@property (nonatomic) BDPCDDynamicCardCustomActionModel actionModel;
@property (nonatomic) @? clickActionBlock;
@property (nonatomic) @? elementGloablActionBlock;
@property (nonatomic) NSMutableDictionary childCacheDictM;
@property (nonatomic) AWEECOMIMDynamicCardBaseElementView parentElementView;
- (id)actionModel;
- (void)setClickActionBlock:;
- (id)clickActionBlock;
- (void)setActionModel:;
- (void)updateWithElememtModel:;
- (void)setElementGloablActionBlock:;
- (void)setReloadCallback:;
- (void)setFetchAndReloadCallback:;
- (void)setHeightChangeCallback:;
- (id)clickableResourceList;
- (void)setElementTap:;
- (id)elementTap;
- (void)onTapCardBackground;
- (void)setChildCacheDictM:;
- (id)elementTapActionModel;
- (id)elementModel;
- (id)elementGloablActionBlock;
- (double)widthWithElementModel:;
- (double)widthWithElementModel:maxWidth:;
- (double)childElementWidth;
- (double)heightWithElementModel:;
- (BOOL)canElementTap;
- (void)setElementTapActionModel:;
- (void)layoutChildElement;
- (id)childCacheDictM;
- (id)addChildElementViewBkgView;
- (double)defaultChildVerticalSpace;
- (void)configElementViewCallBack:;
- (id)reloadCallback;
- (id)fetchAndReloadCallback;
- (id)heightChangeCallback;
- (BOOL)isBusinessElement;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (void)addChildElementView:model:top:height:;
- (void)setElementModel:;
- (id)parentElementView;
- (void)setParentElementView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)sizeWithElementModel:maxSize:;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
+ (id)marginAndPaddingSize:;
+ (id)innerSize:maxSize:;
+ (double)heightWihtElementModel:maxSize:;
+ (BOOL)isVisible:;
@end
