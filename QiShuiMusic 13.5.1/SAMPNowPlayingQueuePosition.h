@interface SAMPNowPlayingQueuePosition : AceObject
@property (nonatomic) q index;
@property (nonatomic) q queueSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setQueueSize:;
- (long long)index;
- (id)encodedClassName;
- (void)setIndex:;
- (long long)queueSize;
+ (id)nowPlayingQueuePosition;
+ (id)nowPlayingQueuePositionWithDictionary:context:;
@end
