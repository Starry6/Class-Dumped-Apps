@interface AWEShareFactory : NSObject
@property (nonatomic) NSMutableDictionary channelRegistry;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerChannelClass:forType:;
- (void)registerChannelClass:forTypes:;
- (id)channelsForTypes:;
- (id)channelForType:;
- (id)channelRegistry;
- (void)setChannelRegistry:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedFactory;
@end
