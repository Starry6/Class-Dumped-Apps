@interface SALCMTvChannel : SADomainObject
@property (nonatomic) NSString callSign;
@property (nonatomic) NSString channelIdentifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSURL streamUrl;
- (void)setName:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)name;
- (id)channelIdentifier;
- (void)setChannelIdentifier:;
- (id)callSign;
- (void)setCallSign:;
- (id)streamUrl;
- (void)setStreamUrl:;
+ (id)tvChannel;
+ (id)tvChannelWithDictionary:context:;
@end
