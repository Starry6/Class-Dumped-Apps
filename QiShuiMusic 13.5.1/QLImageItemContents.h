@interface QLImageItemContents : NSObject
@property (nonatomic) UIImage image;
- (id)initWithImage:;
- (void)setImage:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)image;
+ (BOOL)supportsSecureCoding;
@end
