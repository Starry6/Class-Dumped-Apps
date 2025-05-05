@interface QLImageItemDataContents : QLImageItemContents
@property (nonatomic) NSData imageData;
- (void)setImageData:;
- (id)imageData;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
+ (id)imageItemContentsWithImage:imageData:;
@end
