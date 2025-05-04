@interface AWEPluginByteSyncCustomImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trySyncDataFromServer;
+ (id)sharedPlugin;
@end
