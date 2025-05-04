@interface AWENormalModeTabBarLightModeListenersHashTable : NSObject
@property (nonatomic) NSHashTable listenerHashTable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)switchToLightModeWithProgress:;
- (id)listenerHashTable;
- (void)setListenerHashTable:;
- (void)addListener:;
- (void).cxx_destruct;
+ (id)sharedHashTable;
@end
