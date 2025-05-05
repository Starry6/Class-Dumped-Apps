@interface ASCOfferContext : NSObject
@property (nonatomic) q flags;
@property (nonatomic) BOOL supportsDSIDLessInstall;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (long long)flags;
- (BOOL)isEqual:;
- (id)initWithFlags:;
- (id)copyWithZone:;
- (BOOL)supportsDSIDLessInstall;
+ (BOOL)supportsSecureCoding;
@end
