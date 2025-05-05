@interface VSViewServiceResponse : NSObject
@property (nonatomic) VSAccountMetadata accountMetadata;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)accountMetadata;
- (void)setAccountMetadata:;
+ (BOOL)supportsSecureCoding;
@end
