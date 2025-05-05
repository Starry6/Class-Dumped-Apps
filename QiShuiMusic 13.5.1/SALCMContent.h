@interface SALCMContent : SADomainObject
@property (nonatomic) NSString canonicalId;
@property (nonatomic) NSString channelId;
@property (nonatomic) NSURL externalId;
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
- (id)channelId;
- (void)setChannelId:;
- (id)canonicalId;
- (void)setCanonicalId:;
- (id)externalId;
- (void)setExternalId:;
+ (id)content;
+ (id)contentWithDictionary:context:;
@end
