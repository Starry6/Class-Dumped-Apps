@interface VSAccountChannels : NSObject
@property (nonatomic) NSString providerID;
@property (nonatomic) NSString adamID;
@property (nonatomic) NSSet channelIDs;
@property (nonatomic) NSDictionary providerInfo;
- (id)providerID;
- (id)channelIDs;
- (id)init;
- (void)setChannelIDs:;
- (unsigned long long)hash;
- (void)setProviderID:;
- (void).cxx_destruct;
- (id)description;
- (id)adamID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setAdamID:;
- (id)providerInfo;
- (void)setProviderInfo:;
- (id)serializationResultWithFormat:;
- (id)serializationResult;
+ (id)deserializationResultWithData:;
@end
