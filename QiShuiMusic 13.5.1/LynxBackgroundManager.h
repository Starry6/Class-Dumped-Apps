@interface LynxBackgroundManager : NSObject
@property (nonatomic) LynxUI ui;
@property (nonatomic) LynxBackgroundInfo backgroundInfo;
@property (nonatomic) double opacity;
@property (nonatomic) BOOL hidden;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) {?={_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}} borderRadius;
@property (nonatomic) {?={_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}} borderRadiusRaw;
@property (nonatomic) {UIEdgeInsets=dddd} borderWidth;
@property (nonatomic) UIColor borderTopColor;
@property (nonatomic) UIColor borderBottomColor;
@property (nonatomic) UIColor borderLeftColor;
@property (nonatomic) UIColor borderRightColor;
@property (nonatomic) NSMutableArray backgroundDrawable;
@property (nonatomic) NSMutableArray backgroundOrigin;
@property (nonatomic) NSMutableArray backgroundPosition;
@property (nonatomic) NSMutableArray backgroundRepeat;
@property (nonatomic) NSMutableArray backgroundClip;
@property (nonatomic) NSMutableArray backgroundImageSize;
@property (nonatomic) LynxBackgroundCapInsets backgroundCapInsets;
@property (nonatomic) NSMutableArray maskDrawable;
@property (nonatomic) NSMutableArray maskOrigin;
@property (nonatomic) NSMutableArray maskPosition;
@property (nonatomic) NSMutableArray maskRepeat;
@property (nonatomic) NSMutableArray maskClip;
@property (nonatomic) NSMutableArray maskSize;
@property (nonatomic) LynxLinearGradient linearGradient;
@property (nonatomic) BOOL implicitAnimation;
@property (nonatomic) {CATransform3D=dddddddddddddddd} transform;
@property (nonatomic) {CGPoint=dd} transformOrigin;
@property (nonatomic) LynxBackgroundSubBackgroundLayer backgroundLayer;
@property (nonatomic) LynxBorderLayer borderLayer;
@property (nonatomic) CALayer outlineLayer;
@property (nonatomic) {CGPoint=dd} postTranslate;
@property (nonatomic) LynxBackgroundSubBackgroundLayer maskLayer;
@property (nonatomic) UIView opacityView;
@property (nonatomic) NSArray shadowArray;
@property (nonatomic) NSInteger animationOptions;
@property (nonatomic) NSInteger animationLayerCount;
@property (nonatomic) BOOL allowsEdgeAntialiasing;
@property (nonatomic) BOOL overlapRendering;
@property (nonatomic) C uiBackgroundShapeLayerEnabled;
@property (nonatomic) BOOL shouldRasterizeShadow;
@property (nonatomic) BOOL isPixelated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)borderRadiusRaw;
- (void)removeMaskLayer;
- (void)setIsPixelated:;
- (void)setShadowArray:;
- (BOOL)toAddSubLayerOnBackgroundLayer:;
- (void)tryToLoadMaskImagesAutoRefresh:;
- (void)addAnimationToViewAndLayers:forKey:;
- (id)addMaskLayer;
- (float)adjustRadius:bySize:;
- (int)animationLayerCount;
- (void)applyComplexBackground;
- (void)applyComplexMask;
- (void)applyEffect;
- (void)applySimpleBorder;
- (void)applyTransformOrigin:;
- (id)autoAddBackgroundLayer:;
- (id)autoAddBorderLayer:;
- (void)autoAddOpacityViewWithOpacity:;
- (void)autoAddOutlineLayer;
- (id)backgroundCapInsets;
- (id)backgroundClip;
- (id)backgroundDrawable;
- (id)backgroundImageSize;
- (id)backgroundInfo;
- (id)backgroundOrigin;
- (BOOL)clearAllBackgroundDrawable;
- (void)clearSimpleBorder;
- (void)extractBorderRadiusValue:;
- (id)generateBackgroundImageLayerWithSize:info:;
- (id)generateImageLayerWithBound:position:size:origin:clip:repeat:info:mask:;
- (id)generateMaskImageLayerWithSize:info:;
- (id)getAdjustedBorderWidth;
- (void)getBackgroundImageAsync:withCompletion:;
- (id)getBackgroundImageForContentsAnimation;
- (void)getBackgroundImageForContentsAnimationAsync:withSize:;
- (id)getBackgroundImageForContentsAnimationWithSize:;
- (id)getBorderImageForContentsAnimationWithSize:;
- (id)getBorderPathForAnimationWithSize:;
- (id)getTransformWithPostTranslate;
- (BOOL)hasBackgroundImageOrGradient;
- (BOOL)hasDifferentBackgroundColor:;
- (BOOL)hasDifferentBorderRadius;
- (BOOL)implicitAnimation;
- (id)initWithUI:;
- (BOOL)isBackgroundShapeLayerEnabled;
- (BOOL)isPixelated;
- (BOOL)isSimpleBackground;
- (id)linearGradient;
- (void)makeCssDefaultValueToFitW3c;
- (void)markBackgroundDirty;
- (void)markMaskDirty;
- (id)maskClip;
- (id)maskDrawable;
- (id)maskOrigin;
- (id)maskPosition;
- (id)maskRepeat;
- (id)maskSize;
- (BOOL)overlapRendering;
- (id)postTranslate;
- (void)removeAssociateLayers;
- (void)removeBackgroundLayer;
- (void)removeBorderLayer;
- (void)removeShadowLayers;
- (void)setBackgroundCapInsets:;
- (void)setBackgroundClip:;
- (void)setBackgroundDrawable:;
- (void)setBackgroundImageSize:;
- (void)setBackgroundInfo:;
- (void)setBackgroundOrigin:;
- (void)setBorderRadiusRaw:;
- (void)setImplicitAnimation:;
- (void)setLinearGradient:;
- (void)setMaskClip:;
- (void)setMaskDrawable:;
- (void)setMaskOrigin:;
- (void)setMaskPosition:;
- (void)setMaskRepeat:;
- (void)setMaskSize:;
- (void)setOverlapRendering:;
- (void)setPostTranslate:;
- (void)setShouldRasterizeShadow:;
- (void)setTransformOriginToLayers:;
- (void)setTransformToLayers:;
- (void)setUiBackgroundShapeLayerEnabled:;
- (void)setWithAnimation;
- (id)shadowArray;
- (BOOL)shouldRasterizeShadow;
- (BOOL)toAddSubLayerOnBorderLayer;
- (void)tryToLoadBackgroundImagesAutoRefresh:onlyGradient:;
- (void)tryToLoadImagesAutoRefresh:drawable:layer:isMask:;
- (void)tryToLoadImagesAutoRefresh:drawable:layer:isMask:onlyGradient:;
- (void)tryToLoadImagesAutoRefresh:drawable:layer:onlyGradient:;
- (unsigned char)uiBackgroundShapeLayerEnabled;
- (void)updateBorderColor:value:;
- (BOOL)updateBorderStyle:value:;
- (BOOL)updateOutlineColor:;
- (BOOL)updateOutlineStyle:;
- (BOOL)updateOutlineWidth:;
- (id)actionForLayer:forKey:;
- (void)setOpacity:;
- (void)setBackgroundColor:;
- (void)dealloc;
- (BOOL)allowsEdgeAntialiasing;
- (id)backgroundColor;
- (void)addAnimation:forKey:;
- (void)setTransform:;
- (double)opacity;
- (void)setFilters:;
- (id)borderWidth;
- (BOOL)hidden;
- (void)removeAllAnimations;
- (void)setBorderWidth:;
- (id)transform;
- (void).cxx_destruct;
- (void)setHidden:;
- (void)setAllowsEdgeAntialiasing:;
- (id)ui;
- (void)removeAnimationForKey:;
- (int)animationOptions;
- (id)maskLayer;
- (id)backgroundLayer;
- (id)borderLayer;
- (void)updateShadow;
- (id)transformOrigin;
- (void)setTransformOrigin:;
- (id)outlineLayer;
- (id)borderRadius;
- (void)setUi:;
- (id)backgroundPosition;
- (void)setBackgroundPosition:;
- (id)backgroundRepeat;
- (void)setBackgroundRepeat:;
- (id)borderTopColor;
- (void)setBorderTopColor:;
- (id)borderRightColor;
- (void)setBorderRightColor:;
- (id)borderBottomColor;
- (void)setBorderBottomColor:;
- (id)borderLeftColor;
- (void)setBorderLeftColor:;
- (id)opacityView;
- (void)setOpacityView:;
- (void)setBorderRadius:;
+ (id)createBezierPathWithRoundedRect:borderRadii:;
+ (id)createBezierPathWithRoundedRect:borderRadii:edgeInsets:;
@end
