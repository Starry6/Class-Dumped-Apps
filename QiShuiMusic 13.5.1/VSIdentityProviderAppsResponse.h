@interface VSIdentityProviderAppsResponse : NSObject
@property (nonatomic) NSArray providerAppAdamIDs;
@property (nonatomic) NSArray channelMappings;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)providerAppAdamIDs;
- (void)setProviderAppAdamIDs:;
- (id)channelMappings;
- (void)setChannelMappings:;
+ (BOOL)supportsSecureCoding;
@end
