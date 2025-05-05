@interface ASDPurgeableAppResponse : ASDRequestResponse
@property (nonatomic) q purgeableSize;
@property (nonatomic) NSArray purgeableApps;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithPurgeableSize:purgeableApps:;
- (long long)purgeableSize;
- (id)purgeableApps;
+ (BOOL)supportsSecureCoding;
@end
