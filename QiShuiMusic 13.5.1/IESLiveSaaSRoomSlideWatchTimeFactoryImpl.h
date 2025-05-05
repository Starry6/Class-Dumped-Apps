@interface IESLiveSaaSRoomSlideWatchTimeFactoryImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)holdWatchTimeContextInShortTime;
+ (id)dequeueWatchTimeWithEventContext:;
+ (void)enqueueWatchTime:;
@end
