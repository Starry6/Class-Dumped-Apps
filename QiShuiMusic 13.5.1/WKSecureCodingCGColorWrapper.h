@interface WKSecureCodingCGColorWrapper : NSObject
@property (nonatomic) ^{CGColor=} wrappedColor;
- (id)initWithCGColor:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)wrappedColor;
+ (BOOL)supportsSecureCoding;
@end
