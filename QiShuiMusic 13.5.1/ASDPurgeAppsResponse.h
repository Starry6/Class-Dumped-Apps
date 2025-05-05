@interface ASDPurgeAppsResponse : ASDRequestResponse
@property (nonatomic) q purgedSize;
@property (nonatomic) NSArray purgedApps;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithPurgedSize:purgedApps:;
- (long long)purgedSize;
- (id)purgedApps;
+ (BOOL)supportsSecureCoding;
@end
