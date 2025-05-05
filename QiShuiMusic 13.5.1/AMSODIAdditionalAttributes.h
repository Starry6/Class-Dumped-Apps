@interface AMSODIAdditionalAttributes : NSObject
@property (nonatomic) NSDictionary attributes;
- (id)initWithCoder:;
- (id)initWithAttributes:;
- (void)setAttributes:;
- (id)attributes;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
