@interface SFRevocationPolicy : NSObject
@property (nonatomic) Q revocationMethods;
@property (nonatomic) q networkLookup;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (unsigned long long)revocationMethods;
- (long long)networkLookup;
- (id)initWithRevocationMethods:networkLookup:;
- (void)setRevocationMethods:;
- (void)setNetworkLookup:;
+ (BOOL)supportsSecureCoding;
@end
