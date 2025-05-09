@interface UIImageView : UIView
@property (nonatomic) NSURL csjsd_currentImageURL;
@property (nonatomic) NSURL csjsd_currentHighlightedImageURL;
@property (nonatomic) @? bu_completion;
@property (nonatomic) BU_ZFImageDownloader bu_imageDownloader;
@property (nonatomic) Q bu_attemptToReloadTimesForFailedURL;
@property (nonatomic) BOOL bu_shouldAutoClipImageToViewSize;
@property (nonatomic) NSBundle dmImageBundle;
@property (nonatomic) NSString dmTintColorName;
@property (nonatomic) NSString dmHighlightedTintColorName;
@property (nonatomic) NSString dmImageName;
@property (nonatomic) NSString dmHighlightedImageName;
@property (nonatomic) UIImage dmNormalOriginImage;
@property (nonatomic) NSString tta_imageName;
@property (nonatomic) BDWebImageRequest imageRequest;
@property (nonatomic) BOOL bd_isOpenDownsample;
@property (nonatomic) NSURL bd_backfillRequestURL;
@property (nonatomic) <AFURLResponseSerialization> imageResponseSerializer;
@property (nonatomic) AFHTTPRequestOperation af_imageRequestOperation;
@property (nonatomic) NSURL yy_imageURL;
@property (nonatomic) NSURL yy_highlightedImageURL;
@property (nonatomic) <IESLiveAvatarBorderItem> borderItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString iesim_imageBizTag;
@property (nonatomic) {UIEdgeInsets=dddd} iesim_hitTestEdgeInsets;
@property (nonatomic) NSString iesec_imageBizTag;
@property (nonatomic) NSString iesec_imageSceneTag;
@property (nonatomic) NSString imageUrlString;
@property (nonatomic) UIImageView loadingImageView;
@property (nonatomic) q imageContentMode;
@property (nonatomic) UIColor vk_contentTintColor;
@property (nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) _UIImageLoader _imageLoader;
@property (nonatomic) UIView _placeholderView;
@property (nonatomic) q _defaultRenderingMode;
@property (nonatomic) {UIEdgeInsets=dddd} _edgeInsetsForEffects;
@property (nonatomic) BOOL _edgeInsetsForEffectsAreValid;
@property (nonatomic) BOOL _masksTemplateImages;
@property (nonatomic) BOOL _templateSettingsAreInvalid;
@property (nonatomic) BOOL _symbolImagesIgnoreAccessibilitySizes;
@property (nonatomic) UIImageSymbolConfiguration _overridingSymbolConfiguration;
@property (nonatomic) BOOL _suppressPixelAlignment;
@property (nonatomic) BOOL _guardAgainstDegenerateBaselineCalculation;
@property (nonatomic) I drawMode;
@property (nonatomic) Q _templateImageRenderingEffects;
@property (nonatomic) BOOL _animatesContents;
@property (nonatomic) double _layeredImageCornerRadius;
@property (nonatomic) _UIStackedImageContainerView _layeredImageContainer;
@property (nonatomic) UILayoutGuide imageContentGuide;
@property (nonatomic) UIImageSymbolConfiguration symbolConfiguration;
@property (nonatomic) UIImage image;
@property (nonatomic) UIImage highlightedImage;
@property (nonatomic) UIImageSymbolConfiguration preferredSymbolConfiguration;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) NSArray animationImages;
@property (nonatomic) NSArray highlightedAnimationImages;
@property (nonatomic) double animationDuration;
@property (nonatomic) q animationRepeatCount;
@property (nonatomic) UIColor tintColor;
@property (nonatomic) BOOL animating;
@property (nonatomic) BOOL adjustsImageWhenAncestorFocused;
@property (nonatomic) UILayoutGuide focusedFrameGuide;
@property (nonatomic) UIView overlayContentView;
@property (nonatomic) BOOL masksFocusEffectToContents;
@property (nonatomic) q semanticContentAttribute;
@property (nonatomic) q contentMode;
@property (nonatomic) BOOL _hasContentGravity;
@property (nonatomic) double preferredContentScaleFactor;
@property (nonatomic) BOOL _layoutShouldFlipHorizontalOrientations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UITraitCollection traitCollection;
- (void)_UIAppearance_setBackgroundColor:;
- (void)_abum_setImageWithURL:placeholderImage:;
- (void)abum_setImageWithURL:placeholderImage:;
- (void)csjsd_cancelCurrentImageLoad;
- (id)csjsd_currentImageURL;
- (void)csjsd_setImageWithURL:;
- (void)csjsd_setImageWithURL:completed:;
- (void)csjsd_setImageWithURL:placeholderImage:;
- (void)csjsd_setImageWithURL:placeholderImage:completed:;
- (void)csjsd_setImageWithURL:placeholderImage:options:;
- (void)csjsd_setImageWithURL:placeholderImage:options:completed:;
- (void)csjsd_setImageWithURL:placeholderImage:options:context:;
- (void)csjsd_setImageWithURL:placeholderImage:options:context:progress:completed:;
- (void)csjsd_setImageWithURL:placeholderImage:options:progress:completed:;
- (void)csjsd_cancelCurrentHighlightedImageLoad;
- (id)csjsd_currentHighlightedImageURL;
- (void)csjsd_setHighlightedImageWithURL:;
- (void)csjsd_setHighlightedImageWithURL:completed:;
- (void)csjsd_setHighlightedImageWithURL:options:;
- (void)csjsd_setHighlightedImageWithURL:options:completed:;
- (void)csjsd_setHighlightedImageWithURL:options:context:;
- (void)csjsd_setHighlightedImageWithURL:options:context:progress:completed:;
- (void)csjsd_setHighlightedImageWithURL:options:progress:completed:;
- (unsigned long long)bu_attemptToReloadTimesForFailedURL;
- (void)bu_cancelRequest;
- (id)bu_clipImage:toSize:isScaleToMax:;
- (id)bu_completion;
- (void)bu_downloadWithReqeust:holder:;
- (id)bu_imageDownloader;
- (void)bu_setImage:isFromCache:;
- (BOOL)bu_shouldAutoClipImageToViewSize;
- (void)setBUImageWithURLString:placeholder:;
- (void)setBUImageWithURLString:placeholder:completion:;
- (void)setBUImageWithURLString:placeholderImageName:;
- (void)setBUImageWithURLString:placeholderImageName:completion:;
- (void)setBu_attemptToReloadTimesForFailedURL:;
- (void)setBu_completion:;
- (void)setBu_imageDownloader:;
- (void)setBu_shouldAutoClipImageToViewSize:;
- (void)csj_setImageWithURL:infoViewModel:completed:;
- (void)csj_setImageWithURL:placeholder:infoViewModel:completed:;
- (void)csj_loadGifImageWithURL:placeholder:completed:;
- (void)csj_setImageWithURL:completed:;
- (void)csj_setImageWithURL:placeholder:completed:;
- (id)dmTintColorName;
- (void)setDmImageName:;
- (id)dmHighlightedImageName;
- (id)dmHighlightedTintColorName;
- (id)dmHightlightImage;
- (id)dmImageBundle;
- (id)dmImageName;
- (id)dmNormalImage;
- (id)dmNormalOriginImage;
- (void)refreshDMTintColors;
- (void)setDmHighlightedImageName:;
- (void)setDmHighlightedTintColorName:;
- (void)setDmImageBundle:;
- (void)setDmNormalOriginImage:;
- (void)setDmTintColorName:;
- (void)setTta_imageName:;
- (id)tta_imageName;
- (id)bd_setImageWithURL:placeholder:;
- (void)bd_cancelImageLoad;
- (id)bd_createSensibleMonitor;
- (id)bd_imageURL;
- (BOOL)bd_isOpenDownsample;
- (id)bd_setImageWithURL:;
- (id)bd_setImageWithURL:alternativeURLs:placeholder:options:cacheName:transformer:progress:completion:;
- (id)bd_setImageWithURL:alternativeURLs:placeholder:options:config:blocks:;
- (id)bd_setImageWithURL:alternativeURLs:placeholder:options:timeoutInterval:cacheName:transformer:decryptBlock:progress:completion:;
- (id)bd_setImageWithURL:alternativeURLs:placeholder:options:timeoutInterval:cacheName:transformer:progress:completion:;
- (id)bd_setImageWithURL:options:;
- (id)bd_setImageWithURL:placeholder:options:cacheName:progress:completion:;
- (id)bd_setImageWithURL:placeholder:options:completion:;
- (id)bd_setImageWithURL:placeholder:options:progress:completion:;
- (id)bd_setImageWithURL:placeholder:options:progress:transformer:completion:;
- (id)bd_setImageWithURL:placeholder:options:transformer:progress:completion:;
- (id)bd_setImageWithURLs:placeholder:options:transformer:progress:completion:;
- (void)bd_trackSensibleMonitor:Request:Image:from:;
- (void)setBd_isOpenDownsample:;
- (id)imageRequest;
- (void)setImageRequest:;
- (void)bd_backFillSetImage:;
- (id)bd_backfillRequestURL;
- (void)bd_setImageViewToBackFill:;
- (id)bd_setImageWithBackFill:;
- (id)bd_setImageWithBackFill:alternativeURLs:placeholder:options:cacheName:transformer:progress:completion:;
- (id)bd_setImageWithBackFill:alternativeURLs:placeholder:options:timeoutInterval:cacheName:transformer:progress:completion:;
- (id)bd_setImageWithBackFill:options:;
- (id)bd_setImageWithBackFill:placeholder:;
- (id)bd_setImageWithBackFill:placeholder:options:cacheName:progress:completion:;
- (id)bd_setImageWithBackFill:placeholder:options:completion:;
- (id)bd_setImageWithBackFill:placeholder:options:progress:completion:;
- (id)bd_setImageWithBackFill:placeholder:options:transformer:progress:completion:;
- (void)p_bd_backFill:image:;
- (id)p_bd_cacheImage:keyURL:;
- (void)p_bd_callbackFillImage:keyURL:;
- (id)p_bd_imageForBackFill:sourceImage:;
- (void)setBd_backfillRequestURL:;
- (void)cancelImageRequestOperation;
- (id)imageResponseSerializer;
- (void)setImageResponseSerializer:;
- (void)setImageWithURL:;
- (void)setImageWithURL:placeholderImage:;
- (void)setImageWithURLRequest:placeholderImage:success:failure:;
- (id)af_imageRequestOperation;
- (void)af_setImageRequestOperation:;
- (void)setYy_imageURL:;
- (void)yy_setImageWithURL:placeholder:;
- (void)setYy_highlightedImageURL:;
- (void)yy_cancelCurrentHighlightedImageRequest;
- (void)yy_cancelCurrentImageRequest;
- (id)yy_highlightedImageURL;
- (id)yy_imageURL;
- (void)yy_setHighlightedImageWithURL:options:;
- (void)yy_setHighlightedImageWithURL:placeholder:;
- (void)yy_setHighlightedImageWithURL:placeholder:options:completion:;
- (void)yy_setHighlightedImageWithURL:placeholder:options:manager:progress:transform:completion:;
- (void)yy_setHighlightedImageWithURL:placeholder:options:progress:transform:completion:;
- (void)yy_setImageWithURL:options:;
- (void)yy_setImageWithURL:placeholder:options:completion:;
- (void)yy_setImageWithURL:placeholder:options:manager:progress:transform:completion:;
- (void)yy_setImageWithURL:placeholder:options:progress:transform:completion:;
- (void)recoverViewStateWithForced:;
- (void)saveViewState;
- (void)prepareViewForSkeleton;
- (void)ieslivesaas_cancelCurrentImageLoad;
- (long long)ieslivesaas_getWebInternalType;
- (void)ieslivesaas_setImageWithURL:;
- (void)ieslivesaas_setImageWithURL:flexSetting:;
- (void)ieslivesaas_setImageWithURL:flexSetting:completeBlock:;
- (void)ieslivesaas_setImageWithURL:placeholderImage:;
- (void)ieslivesaas_setImageWithURL:placeholderImage:completed:;
- (void)ieslivesaas_setImageWithURL:placeholderImage:cornerRadius:;
- (void)ieslivesaas_setImageWithURLs:;
- (void)ieslivesaas_setImageWithURLs:placeholderImage:;
- (void)ieslivesaas_setImageWithURLs:placeholderImage:completed:;
- (void)ieslivesaas_setImageWithURLs:placeholderImage:cornerRadius:completed:;
- (void)ieslivesaas_setImageWithURLs:placeholderImage:needCircular:completed:;
- (void)ieslivesaas_setImageWithURLs:targetSize:placeholderImage:;
- (void)ieslivesaas_setBadge:placeholderImage:vipRouter:;
- (void)ieslivesaas_setBadge:withVipRouter:;
- (void)ieslivesaas_setLocalBadge:withVipRouter:;
- (id)borderItem;
- (void)didUpdatedBorderURLs:;
- (void)setBorderItem:;
- (void)ieslive_cancelCurrentImageLoad;
- (long long)ieslive_getWebInternalType;
- (void)ieslive_setImageWithURL:;
- (void)ieslive_setImageWithURL:flexSetting:;
- (void)ieslive_setImageWithURL:flexSetting:completeBlock:;
- (void)ieslive_setImageWithURL:placeholderImage:;
- (void)ieslive_setImageWithURL:placeholderImage:completed:;
- (void)ieslive_setImageWithURL:placeholderImage:cornerRadius:;
- (void)ieslive_setImageWithURLs:;
- (void)ieslive_setImageWithURLs:placeholderImage:;
- (void)ieslive_setImageWithURLs:placeholderImage:cacheName:;
- (void)ieslive_setImageWithURLs:placeholderImage:completed:;
- (void)ieslive_setImageWithURLs:placeholderImage:cornerRadius:completed:;
- (void)ieslive_setImageWithURLs:placeholderImage:needCircular:completed:;
- (void)ieslive_setImageWithURLs:placeholderImage:webImageOptions:completed:;
- (void)ieslive_setImageWithURLs:targetSize:;
- (void)ieslive_setBadge:;
- (void)ieslive_setBadge:placeholderImage:;
- (void)iesim_updateImageViewAnimationType:;
- (void)_iesim_setImageWithURLArray:placeholder:cacheName:options:progress:postProcess:decryptBlock:completion:;
- (void)_iesim_setImageWithURLArray:placeholder:cacheName:options:progress:transformObject:decryptBlock:completion:;
- (void)iesim_bd_fetchImageWithMonitorUpload:placeholder:cacheName:options:progress:postProcess:decryptBlock:completion:;
- (void)iesim_bd_fetchImageWithMonitorUpload:placeholder:cacheName:options:progress:transformObject:decryptBlock:completion:;
- (void)iesim_bd_fetchImageWithUrlArray:placeholder:cacheName:index:options:progress:postProcess:decryptBlock:completion:;
- (void)iesim_bd_fetchImageWithUrlArray:placeholder:cacheName:index:options:progress:transformObject:decryptBlock:completion:;
- (void)iesim_bd_fetchImageWithUrlArray:placeholder:cacheName:index:options:progress:transformer:decryptBlock:completion:;
- (void)iesim_cancelImageRequest;
- (BOOL)iesim_confirmAnimatedKitIsBDWebImage;
- (id)iesim_imageBizTag;
- (BOOL)iesim_isOpenDownsample;
- (void)iesim_reDrawImage:inContainerSize:;
- (void)iesim_setImageWithURL:;
- (void)iesim_setImageWithURL:imageURI:expectedSize:placeholder:options:completion:;
- (void)iesim_setImageWithURL:options:;
- (void)iesim_setImageWithURL:placeholder:;
- (void)iesim_setImageWithURL:placeholder:cacheName:options:progress:postProcess:completion:;
- (void)iesim_setImageWithURL:placeholder:cacheName:options:progress:postProcess:decryptBlock:completion:;
- (void)iesim_setImageWithURL:placeholder:completion:;
- (void)iesim_setImageWithURL:placeholder:options:completion:;
- (void)iesim_setImageWithURL:placeholder:options:progress:postProcess:completion:;
- (void)iesim_setImageWithURLArray:;
- (void)iesim_setImageWithURLArray:downgradingURLArray:placeholder:options:completion:;
- (void)iesim_setImageWithURLArray:imageURI:expectedSize:;
- (void)iesim_setImageWithURLArray:imageURI:expectedSize:options:;
- (void)iesim_setImageWithURLArray:imageURI:expectedSize:placeholder:completion:;
- (void)iesim_setImageWithURLArray:imageURI:expectedSize:placeholder:options:completion:;
- (void)iesim_setImageWithURLArray:imageURI:expectedSize:placeholder:options:manager:completion:;
- (void)iesim_setImageWithURLArray:imageURI:expectedSize:placeholder:options:manager:transformObject:completion:;
- (void)iesim_setImageWithURLArray:options:;
- (void)iesim_setImageWithURLArray:placeholder:;
- (void)iesim_setImageWithURLArray:placeholder:cacheName:options:completion:;
- (void)iesim_setImageWithURLArray:placeholder:cacheName:options:progress:postProcess:completion:;
- (void)iesim_setImageWithURLArray:placeholder:cacheName:options:progress:postProcess:decryptBlock:completion:;
- (void)iesim_setImageWithURLArray:placeholder:cacheName:options:progress:transformObject:completion:;
- (void)iesim_setImageWithURLArray:placeholder:cacheName:options:progress:transformObject:decryptBlock:completion:;
- (void)iesim_setImageWithURLArray:placeholder:completion:;
- (void)iesim_setImageWithURLArray:placeholder:options:completion:;
- (void)iesim_setImageWithURLArray:placeholder:options:manager:completion:;
- (void)iesim_setImageWithURLArray:placeholder:options:manager:progress:postProcess:completion:;
- (void)iesim_setImageWithURLArray:placeholder:options:manager:progress:transformObject:completion:;
- (void)iesim_setImageWithURLArray:placeholder:options:progress:postProcess:completion:;
- (void)iesim_setImageWithURLArray:placeholder:options:progress:transformObject:completion:;
- (void)iesim_setImageWithURLArray:placeholder:options:transformObject:completion:;
- (void)iesim_yy_fetchImageWithMonitorUpload:placeholder:options:manager:progress:postProcess:completion:;
- (void)iesim_yy_fetchImageWithUrlArray:index:placeholder:options:manager:progress:postProcess:completion:;
- (id)p_iesim_aspectFillModeFrameOfContentWithContentSize:containerSize:;
- (void)setIesim_imageBizTag:;
- (void)setIesim_isOpenDownsample:;
- (void)iesim_setImage:;
- (id)iesim_hitTestEdgeInsets;
- (void)setIesim_hitTestEdgeInsets:;
- (BOOL)pointInside:withEvent:;
- (void)__aweim__cachePlaceholder:keyProvider:;
- (void)__aweim__callbackCompletionWithURL:image:error:;
- (void)__aweim__callbackWithReuseError:;
- (id)__aweim__placeholderWithKeyProvider:;
- (void)__aweim__resetCurrentRequestAndCallbackWithReuseErrorIfNecessary;
- (void)__aweim__setResult:cacheKey:url:options:;
- (void)__aweim_setImageWithURLArray:cacheKey:placeholder:keyProvider:transformer:options:bdOptions:;
- (id)aweim__cacheKeyWithNSURL:transformer:;
- (id)aweim__urlFromUrlArray:;
- (id)aweim_request;
- (void)aweim_setAvatarWithURLArray:placeholder:cachedPlaceholderKeyProvider:roundCornerRatio:completion:;
- (void)aweim_setAvatarWithURLArray:placeholder:cachedPlaceholderKeyProvider:roundCornerRatio:options:completion:;
- (void)aweim_setAvatarWithURLArray:placeholder:roundCornerRatio:completion:;
- (void)aweim_setImageWithURLArray:placeholder:cachedPlaceholderKeyProvider:transformer:options:bdOptions:completion:;
- (void)aweim_setImageWithURLArray:placeholder:cachedPlaceholderKeyProvider:transformer:options:completion:;
- (void)setAweim_request:;
- (void)iesec_setGradientImageBetweenImageA:imageB:percent:;
- (void)iesec_cancelImageViewRequest;
- (id)iesec_imageBizTag;
- (id)iesec_imageSceneTag;
- (void)iesec_setImageWithURL:;
- (void)iesec_setImageWithURL:placeholder:;
- (void)iesec_setImageWithURL:placeholder:bizTag:sceneTag:preferredSize:completion:;
- (void)iesec_setImageWithURL:placeholder:bizTag:sceneTag:preferredSize:perfBlock:completion:;
- (void)iesec_setImageWithURL:placeholder:bizTag:sceneTag:preferredSize:perfBlock:requestConfig:completion:;
- (void)iesec_setImageWithURL:placeholder:completion:;
- (void)iesec_setImageWithURL:requestConfig:;
- (void)iesec_setImageWithURLArray:;
- (void)iesec_setImageWithURLArray:placeholder:;
- (void)iesec_setImageWithURLArray:placeholder:bizTag:sceneTag:preferredSize:completion:;
- (void)iesec_setImageWithURLArray:placeholder:bizTag:sceneTag:preferredSize:perfBlock:completion:;
- (void)iesec_setImageWithURLArray:placeholder:bizTag:sceneTag:preferredSize:perfBlock:requestConfig:completion:;
- (void)iesec_setImageWithURLArray:placeholder:completion:;
- (void)iesec_setImageWithURLArray:placeholder:preferredSize:completion:;
- (void)iesec_setImageWithURLArray:preferredSize:;
- (void)iesec_setPreviewImageWithURL:;
- (void)setIesec_imageBizTag:;
- (void)setIesec_imageSceneTag:;
- (void)iesec_asyncSetBundleImageNamed:;
- (void)iesec_asyncSetBundleImageNamed:renderingMode:;
- (id)iesec_currentBundleImageName;
- (void)iesec_setCurrentBundleImageName:;
- (id)cj_setImageWithURL:placeholder:;
- (void)cj_startLoading;
- (void)setSilentImage:;
- (void)cj_setImage:;
- (void)cj_setImage:completion:;
- (id)cj_setImageWithURL:;
- (id)cj_setImageWithURL:placeholder:completion:;
- (void)cj_stopLoading;
- (id)imageUrlString;
- (id)loadingImageView;
- (id)p_createClearImage;
- (void)setImageUrlString:;
- (void)setLoadingImageView:;
- (id)silentImage;
- (void)PG_updateVibrancyEffectForTintColor;
- (long long)_nui_baselineViewType;
- (void)setImageContentMode:;
- (long long)imageContentMode;
- (void)mt_applyVisualStyling:;
- (void)setVk_contentTintColor:;
- (id)vk_contentTintColor;
- (void)_lp_setTintColor:;
- (void)setPreferredSymbolConfiguration:;
- (void)setAnimating:;
- (id)_baselineOffsetsAtSize:;
- (void)decodeRestorableStateWithCoder:;
- (id)_symbolConfigurationForSource:;
- (id)initWithImage:;
- (void)drawRect:;
- (void)encodeRestorableStateWithCoder:;
- (void)setBackgroundColor:;
- (void)dealloc;
- (id)_intrinsicSizeWithinSize:;
- (id)preferredSymbolConfiguration;
- (BOOL)isAnimating;
- (BOOL)isTransparentFocusItem;
- (double)animationDuration;
- (void)setFrame:;
- (void)layoutSubviews;
- (void)displayLayer:;
- (id)_renditionForSource:size:symbolConfiguration:withRenditionResult:lazy:;
- (BOOL)_layoutShouldFlipHorizontalOrientations;
- (void)_didMoveFromWindow:toWindow:;
- (void)setContentScaleFactor:;
- (void)setTranslatesAutoresizingMaskIntoConstraints:;
- (id)largeContentImage;
- (BOOL)_canDrawContent;
- (void)setImage:;
- (double)_baselineOffsetFromBottom;
- (id)initWithCoder:;
- (void)setSemanticContentAttribute:;
- (void)tintColorDidChange;
- (BOOL)isHighlighted;
- (void)startAnimating;
- (void)_updateState;
- (BOOL)scalesLargeContentImage;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (BOOL)useBlockyMagnificationInClassic;
- (void)encodeWithCoder:;
- (id)imageRef;
- (void)stopAnimating;
- (id)_effectForRenderingSource:;
- (id)alignmentRectInsets;
- (void)setAnimationDuration:;
- (id)sizeThatFits:;
- (void)setBounds:;
- (double)preferredContentScaleFactor;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)initWithImage:highlightedImage:;
- (BOOL)_hasContentGravity;
- (void)setHidden:;
- (long long)_effectiveRenderingModeForSource:symbolConfiguration:;
- (BOOL)_guardAgainstDegenerateBaselineCalculation;
- (void)setContentMode:;
- (void)_setGuardAgainstDegenerateBaselineCalculation:;
- (BOOL)_shouldAnimatePropertyWithKey:;
- (id)image;
- (unsigned long long)defaultAccessibilityTraits;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)adjustsImageSizeForAccessibilityContentSizeCategory;
- (void)setAdjustsImageSizeForAccessibilityContentSizeCategory:;
- (BOOL)_hasBaseline;
- (BOOL)_shouldInvalidateBaselineConstraintsForSize:oldSize:;
- (double)_firstBaselineOffsetFromTop;
- (double)_scaleFactorForImage;
- (id)symbolConfiguration;
- (void)_applySettingsForLegibilityStyle:;
- (id)_generateBackdropMaskImage;
- (id)_activeImage;
- (id)_placeholderView;
- (id)_currentImage;
- (void)_willBeginBeingDisplayedInPointerContentEffect;
- (void)_didStopBeingDisplayedInPointerContentEffect;
- (id)highlightedImage;
- (void)setHighlightedImage:;
- (void)_ancestorWillUpdateFocusInContext:withAnimationCoordinator:;
- (id)_overridingSymbolConfiguration;
- (long long)_defaultRenderingMode;
- (unsigned long long)_templateImageRenderingEffects;
- (id)_imageLoader;
- (id)_layoutForImage:inSize:;
- (id)_layoutForImage:inSize:cachePerSize:forBaselineOffset:;
- (void)_invalidateImageLayouts;
- (BOOL)_setImageViewContents:;
- (void)_handlePendingImageLayout:;
- (void)_updateContentsMultiplyColorAndSwizzleFromLayout:;
- (BOOL)_setImageViewContentsForAnimatedImage:;
- (void)_setViewGeometry:forMetric:;
- (BOOL)_isHasBaselinePropertyChangeable;
- (void)_baselineOffsetParametersDidChangeHasBaselinePropertyChanged:;
- (void)_imageContentParametersDidChange;
- (id)imageContentGuide;
- (id)_imageContentGuideAllowingCreation:;
- (id)midlineGuide;
- (BOOL)_suppressPixelAlignment;
- (void)_setSuppressPixelAlignment:;
- (id)_symbolConfigurationForImage:;
- (id)_colorSymbolConfigurationAddingTintColor:;
- (void)_setOverridingSymbolConfiguration:;
- (void)setSymbolConfiguration:;
- (void)setAnimationImages:;
- (id)animationImages;
- (void)setHighlightedAnimationImages:;
- (id)highlightedAnimationImages;
- (void)_removeLayerAnimations;
- (void)_cleanUpForStopAnimating;
- (id)_currentAnimationKeyframeImage;
- (BOOL)_hasInstalledContentsAnimation;
- (void)setAnimationRepeatCount:;
- (long long)animationRepeatCount;
- (BOOL)_shouldTreatImageAsTemplate:;
- (void)_updateMasking;
- (void)_invalidateTemplateSettings;
- (void)_templateSettingsDidChange;
- (void)_updateTemplateProperties;
- (id)_edgeInsetsForEffects;
- (void)_setDefaultRenderingMode:;
- (void)_setTemplateImageRenderingEffects:;
- (BOOL)_masksTemplateImages;
- (void)_setMasksTemplateImages:;
- (id)_contentsMultiplyColorForEffectiveTintColor:;
- (id)_effectiveTintColorWithImage:symbolConfiguration:;
- (BOOL)_needsImageEffectsForImage:;
- (BOOL)_needsImageEffectsForImage:symbolConfiguration:suppressColorizing:;
- (BOOL)_getDrawModeCompositeOperation:whiteComponent:drawingAlpha:;
- (void)_drawImageEffectsForImage:inRect:effectiveTintColor:;
- (unsigned int)drawMode;
- (void)setDrawMode:;
- (void)setCGImageRef:;
- (void)_setDecompressingImage:forType:;
- (id)_decompressingImageForType:;
- (id)_checkImageForAdaptation:hasAdapted:;
- (id)_checkHighlightedImageForAdaptation:hadAdapted:;
- (id)_adaptiveImageForImage:assignedImage:currentImage:hasAdapted:;
- (id)_currentHighlightedImage;
- (void)_updateResolvedImage;
- (id)_imageResolvingTraitCollectionForTraitCollection:layoutDirection:;
- (id)_resolvedImageFromImage:forTrait:;
- (id)_resolvedImageFromImage:;
- (BOOL)_resolveImageForTrait:previouslyDisplayedImage:;
- (void)_updateMaterialForImage:;
- (void)_updateImageViewForOldImage:newImage:;
- (BOOL)_displayImageAsLayered:;
- (void)_configureForLayeredImage:;
- (void)_teardownLayeredImage;
- (void)_setLayeredImageContainer:;
- (id)_layeredImageContainer;
- (double)_layeredImageCornerRadius;
- (id)_existingOverlayView;
- (void)_setOverlayContentView:;
- (id)overlayContentView;
- (void)_setLayeredImageCornerRadius:;
- (void)_updateLayeredImageIsFocusedWithFocusedView:focusAnimationCoordinator:;
- (id)_applyImageEffectsToCIImage:effectiveTintColor:;
- (BOOL)_setImageViewContentsForCIImageBackedImage:;
- (void)_setPlaceholderView:;
- (void)_updateVisibilityAndFrameOfPlaceholderView;
- (void)_loadImageWithURL:;
- (void)_loadImage:delegate:;
- (void)_mainQ_beginLoadingIfApplicable;
- (void)_kickoffQ_beginLoadingWithImageLoader:;
- (void)_mainQ_imageLoader:finishedWithImage:error:;
- (void)_decodeQ_imageLoader:decodeImage:layout:;
- (void)_mainQ_imageLoader:finishedOrSkippedDecodingImage:layout:;
- (void)_stopLoading;
- (void)_mainQ_resetForLoader:delegate:;
- (BOOL)_templateSettingsAreInvalid;
- (BOOL)_edgeInsetsForEffectsAreValid;
- (void)_setEdgeInsetsForEffectsAreValid:;
- (BOOL)adjustsImageWhenAncestorFocused;
- (void)setAdjustsImageWhenAncestorFocused:;
- (id)focusedFrameGuide;
- (BOOL)masksFocusEffectToContents;
- (void)setMasksFocusEffectToContents:;
- (BOOL)_symbolImagesIgnoreAccessibilitySizes;
- (void)_setSymbolImagesIgnoreAccessibilitySizes:;
- (BOOL)_animatesContents;
- (void)_setAnimatesContents:;
- (BOOL)_recomputePretilingState;
- (void)_updatePretiledImageCacheForImage:;
- (void)_clearPretiledImageCacheForImage:;
- (id)_cachedPretiledImageForImage:;
+ (void)abum_downloadImageWithURL:complete:;
+ (void)abum_preloadImageWithURL:;
+ (void)abum_setupCacheMap;
+ (id)bdxa_appIconImageView;
+ (void)setSharedImageCache:;
+ (id)sharedImageCache;
+ (id)af_sharedImageRequestOperationQueue;
+ (void)_aweim_metrics_requestImageWithURLArray:options:fixMode:manager:progress:completion:;
+ (void)aweim_metrics_requestImageWithURLArray:completion:;
+ (void)aweim_metrics_requestImageWithURLArray:fixMode:completion:;
+ (id)iesim_animatedImageView;
+ (void)iesim_requestImageWithURLArray:;
+ (BOOL)iesim_validURL:;
+ (void)_iesim_requestImageWithURLArray:options:cacheName:progress:decryptBlock:completion:bizTag:;
+ (void)_iesim_requestImageWithURLArray:options:cacheName:progress:transformObject:completion:;
+ (void)_iesim_requestImageWithURLArray:options:cacheName:progress:transformObject:decryptBlock:completion:bizTag:;
+ (void)iesim_bd_requestImageWithMonitorUpload:options:cacheName:progress:transform:decryptBlock:completion:bizTag:;
+ (void)iesim_bd_requestImageWithMonitorUpload:options:cacheName:progress:transformObject:decryptBlock:completion:bizTag:;
+ (void)iesim_bd_requestImageWithURLArray:options:cacheName:index:progress:completion:;
+ (void)iesim_bd_requestImageWithURLArray:options:cacheName:index:progress:transformObject:completion:;
+ (void)iesim_bd_requestImageWithURLArray:options:cacheName:index:progress:transformObject:decryptBlock:completion:;
+ (void)iesim_bd_requestImageWithURLArray:options:cacheName:index:progress:transformObject:decryptBlock:completion:bizTag:;
+ (id)iesim_customCacheName;
+ (id)iesim_optimizeViewSize:;
+ (void)iesim_requestImageWithURL:;
+ (void)iesim_requestImageWithURL:completion:;
+ (void)iesim_requestImageWithURL:options:cacheName:progress:completion:;
+ (void)iesim_requestImageWithURL:options:cacheName:progress:decryptBlock:completion:;
+ (void)iesim_requestImageWithURL:options:cacheName:progress:decryptBlock:completion:bizTag:;
+ (void)iesim_requestImageWithURL:options:completion:;
+ (void)iesim_requestImageWithURL:options:progress:completion:;
+ (void)iesim_requestImageWithURLArray:cacheName:completion:;
+ (void)iesim_requestImageWithURLArray:completion:;
+ (void)iesim_requestImageWithURLArray:imageURI:expectedSize:manager:completion:;
+ (void)iesim_requestImageWithURLArray:imageURI:expectedSize:manager:transformObject:completion:;
+ (void)iesim_requestImageWithURLArray:manager:completion:;
+ (void)iesim_requestImageWithURLArray:manager:transformObject:completion:;
+ (void)iesim_requestImageWithURLArray:options:cacheName:progress:decryptBlock:completion:bizTag:;
+ (void)iesim_requestImageWithURLArray:options:cacheName:progress:transformObject:completion:;
+ (void)iesim_requestImageWithURLArray:options:cacheName:progress:transformObject:decryptBlock:completion:;
+ (void)iesim_requestImageWithURLArray:options:cacheName:progress:transformObject:decryptBlock:completion:bizTag:;
+ (void)iesim_requestImageWithURLArray:options:completion:;
+ (void)iesim_requestImageWithURLArray:options:manager:progress:transformObject:completion:;
+ (void)iesim_requestImageWithURLArray:options:progress:completion:;
+ (void)iesim_requestImageWithURLArray:options:progress:decryptBlock:completion:;
+ (void)iesim_requestImageWithURLArray:options:progress:transformObject:completion:;
+ (void)iesim_requestImageWithURLArray:transformObject:completion:;
+ (id)iesim_safeURL:;
+ (id)iesim_safeURLArrayWitURL:;
+ (unsigned long long)iesim_webImageInternal;
+ (void)iesim_yy_requestImageWithMonitorUpload:options:manager:progress:transform:completion:bizTag:;
+ (void)iesim_yy_requestImageWithURLArray:index:options:manager:progress:transform:completion:bizTag:;
+ (void)setIesim_webImageInternal:;
+ (void)IESIMLocalizations_load;
+ (id)filterSafeURLs:;
+ (BOOL)enableNewImplForImageRequest;
+ (void)iesec_requestImageWithURLArray:bizTag:sceneTag:completion:;
+ (void)iesec_requestImageWithURLArray:bizTag:sceneTag:preferredSize:completion:;
+ (void)iesec_requestImageWithURLArray:bizTag:sceneTag:preferredSize:perfBlock:completion:;
+ (void)iesec_requestImageWithURLArray:completion:;
+ (Class)iesec_serviceImpl;
+ (Class)iesec_serviceImplNew;
+ (id)safeURL:;
+ (id)imageViewWithImage:;
+ (id)_surfacePropertiesForRenderingCIImageWithSize:pixelFormat:bytesPerElement:;
+ (BOOL)_canReuseIOSurface:forRenderingCIImageWithIOSurfaceProperties:;
+ (id)_sharedDecodingQueue;
@end
