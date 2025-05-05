@interface WKSecureCodingURLWrapper : NSURL
@property (nonatomic) NSURL wrappedURL;
- (id)initWithURL:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)wrappedURL;
+ (BOOL)supportsSecureCoding;
@end
