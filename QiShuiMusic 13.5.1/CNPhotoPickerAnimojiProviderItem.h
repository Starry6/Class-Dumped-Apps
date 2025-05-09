@interface CNPhotoPickerAnimojiProviderItem : CNPhotoPickerProviderItem
@property (nonatomic) NSData _originalImageData;
@property (nonatomic) NSData _generatedImageData;
@property (nonatomic) NSData thumbnailImageData;
@property (nonatomic) UIImage loadingPlaceholderImage;
@property (nonatomic) CNPhotoPickerColorVariant backgroundColorVariant;
@property (nonatomic) CNAvatarStickerGeneratorProvider stickerGeneratorProvider;
@property (nonatomic) AVTRenderingScope renderingScope;
@property (nonatomic) AVTAvatarRecordImageProvider imageProvider;
@property (nonatomic) <AVTAvatarRecord> avatarRecord;
@property (nonatomic) AVTStickerConfiguration poseConfiguration;
@property (nonatomic) {CGSize=dd} originalImageSize;
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
- (unsigned long long)imageType;
- (id)imageProvider;
- (void)setEdgeInsets:;
- (id)imageData;
- (void)setImageProvider:;
- (unsigned long long)hash;
- (id)edgeInsets;
- (id)variantIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)avatarRecord;
- (void)setAvatarRecord:;
- (BOOL)allowsVariants;
- (BOOL)allowsMoveAndScale;
- (BOOL)shouldShowCaption;
- (id)localizedVariantsTitle;
- (id)originalImageData;
- (void)generateAllImageDatasIfNeeded;
- (id)generateThumbnailImageDataIfNeeded;
- (void)applyVariantEffectToFullsizeImageWithCompletion:;
- (void)updateVisualIdentity:;
- (id)createVariantsItemsWithVariantsManager:;
- (id)contactImageForMetadataStore;
- (id)loadingPlaceholderImage;
- (void)setLoadingPlaceholderImage:;
- (id)poseConfiguration;
- (void)setPoseConfiguration:;
- (id)backgroundColorVariant;
- (void)setBackgroundColorVariant:;
- (id)renderingScope;
- (void)setRenderingScope:;
- (id)transformForMemojiMetadata;
- (id)initWithOriginalImageData:cropRect:backgroundColorVariant:;
- (id)initWithOriginalImageData:cropRect:;
- (id)initWithAvatarRecord:imageProvider:renderingScope:renderingQueue:callbackQueue:;
- (id)copyWithColor:;
- (id)copyWithPoseConfiguration:generatorProvider:;
- (id)renderDefaultAvatarImage;
- (id)renderAvatarWithPoseWithSize:;
- (id)renderAvatarWithBackgroundWithImageData:;
- (id)renderAvatarWithBackgroundWithImage:;
- (id)generateImageDataIfNeeded;
- (id)originalImageSize;
- (void)setOriginalImageSize:;
- (id)_originalImageData;
- (void)set_originalImageData:;
- (id)_generatedImageData;
- (void)set_generatedImageData:;
- (id)stickerGeneratorProvider;
- (void)setStickerGeneratorProvider:;
+ (id)log;
@end
