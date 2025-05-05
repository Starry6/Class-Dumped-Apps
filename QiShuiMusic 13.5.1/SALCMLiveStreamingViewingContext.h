@interface SALCMLiveStreamingViewingContext : SALCMViewingContext
@property (nonatomic) NSDate eventStartTime;
@property (nonatomic) BOOL watchingLive;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)eventStartTime;
- (void)setEventStartTime:;
- (BOOL)watchingLive;
- (void)setWatchingLive:;
+ (id)liveStreamingViewingContext;
+ (id)liveStreamingViewingContextWithDictionary:context:;
@end
