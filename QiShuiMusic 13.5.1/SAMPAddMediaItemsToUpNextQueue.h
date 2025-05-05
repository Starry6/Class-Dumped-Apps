@interface SAMPAddMediaItemsToUpNextQueue : SABaseClientBoundCommand
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) NSString insertLocation;
@property (nonatomic) SAMPCollection mediaCollection;
@property (nonatomic) NSString musicAccountSharedUserId;
@property (nonatomic) NSString speakerSharedUserId;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (id)insertLocation;
- (void)setInsertLocation:;
- (id)mediaCollection;
- (void)setMediaCollection:;
- (id)musicAccountSharedUserId;
- (void)setMusicAccountSharedUserId:;
- (id)speakerSharedUserId;
- (void)setSpeakerSharedUserId:;
+ (id)addMediaItemsToUpNextQueue;
+ (id)addMediaItemsToUpNextQueueWithDictionary:context:;
@end
