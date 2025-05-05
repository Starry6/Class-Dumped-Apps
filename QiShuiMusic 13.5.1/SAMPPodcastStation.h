@interface SAMPPodcastStation : SAMPCollection
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)podcastStation;
+ (id)podcastStationWithDictionary:context:;
@end
