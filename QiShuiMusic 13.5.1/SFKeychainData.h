@interface SFKeychainData : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) SFKeychainDataAttributes attributes;
- (id)data;
- (id)initWithCoder:;
- (void)setAttributes:;
- (id)attributes;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
