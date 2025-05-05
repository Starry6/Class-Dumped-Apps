@interface CNSharingProfileOnboardingPhotoSelectionResult : NSObject
@property (nonatomic) UIImage originalImage;
@property (nonatomic) UIImage compositedImage;
@property (nonatomic) NSString variantName;
@property (nonatomic) q avatarType;
@property (nonatomic) BOOL wasSelectedInFullPhotoPicker;
@property (nonatomic) NSData memojiMetadata;
- (void)setOriginalImage:;
- (void).cxx_destruct;
- (id)originalImage;
- (id)memojiMetadata;
- (void)setMemojiMetadata:;
- (id)variantName;
- (void)setVariantName:;
- (id)compositedImage;
- (void)setCompositedImage:;
- (long long)avatarType;
- (void)setAvatarType:;
- (BOOL)wasSelectedInFullPhotoPicker;
- (void)setWasSelectedInFullPhotoPicker:;
@end
