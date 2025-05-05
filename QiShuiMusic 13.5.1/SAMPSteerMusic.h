@interface SAMPSteerMusic : SADomainCommand
@property (nonatomic) SAMPCollection currentListeningToCollection;
@property (nonatomic) SAMPMediaItem currentListeningToItem;
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) NSString steerableBlob;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (id)currentListeningToCollection;
- (void)setCurrentListeningToCollection:;
- (id)currentListeningToItem;
- (void)setCurrentListeningToItem:;
- (id)steerableBlob;
- (void)setSteerableBlob:;
+ (id)steerMusic;
+ (id)steerMusicWithDictionary:context:;
@end
