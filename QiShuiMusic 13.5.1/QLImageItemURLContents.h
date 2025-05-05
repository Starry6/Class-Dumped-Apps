@interface QLImageItemURLContents : QLImageItemContents
@property (nonatomic) NSURL imageURL;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setImageURL:;
- (id)imageURL;
+ (BOOL)supportsSecureCoding;
+ (id)imageItemContentsWithImage:imageURL:;
@end
