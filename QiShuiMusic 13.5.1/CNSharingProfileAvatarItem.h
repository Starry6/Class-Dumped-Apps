@interface CNSharingProfileAvatarItem : NSObject
@property (nonatomic) @? imageProvider;
@property (nonatomic) @? originalImageProvider;
@property (nonatomic) q type;
@property (nonatomic) NSString variantIdentifier;
@property (nonatomic) BOOL wasSetFromFullPhotoPicker;
@property (nonatomic) NSData memojiMetadata;
- (id)imageProvider;
- (void)setVariantIdentifier:;
- (id)variantIdentifier;
- (long long)type;
- (void).cxx_destruct;
- (id)memojiMetadata;
- (void)setMemojiMetadata:;
- (id)initWithImageProvider:type:;
- (id)initWithImageProvider:originalImageProvider:type:;
- (id)originalImageProvider;
- (BOOL)wasSetFromFullPhotoPicker;
- (void)setWasSetFromFullPhotoPicker:;
@end
