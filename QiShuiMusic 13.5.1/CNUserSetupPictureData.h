@interface CNUserSetupPictureData : NSObject
@property (nonatomic) NSData imageData;
@property (nonatomic) NSData thumbnailImageData;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) NSData memojiMetadata;
- (void)setImageData:;
- (id)imageData;
- (id)cropRect;
- (void)setCropRect:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)thumbnailImageData;
- (void)setThumbnailImageData:;
- (id)memojiMetadata;
- (void)setMemojiMetadata:;
- (id)initWithImageData:thumbnailImageData:cropRect:memojiMetadata:;
+ (id)log;
+ (BOOL)supportsSecureCoding;
+ (id)userSetupPictureDataFromData:;
@end
