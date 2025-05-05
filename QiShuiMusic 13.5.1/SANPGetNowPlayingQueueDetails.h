@interface SANPGetNowPlayingQueueDetails : SABaseClientBoundCommand
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) q nextItemCount;
@property (nonatomic) NSNumber preemptiveNowPlayingQueueDetailsTimeOut;
@property (nonatomic) q previousItemCount;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (BOOL)mutatingCommand;
- (long long)nextItemCount;
- (void)setNextItemCount:;
- (id)preemptiveNowPlayingQueueDetailsTimeOut;
- (void)setPreemptiveNowPlayingQueueDetailsTimeOut:;
- (long long)previousItemCount;
- (void)setPreviousItemCount:;
+ (id)getNowPlayingQueueDetails;
+ (id)getNowPlayingQueueDetailsWithDictionary:context:;
@end
