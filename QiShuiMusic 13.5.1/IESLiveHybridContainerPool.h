@interface IESLiveHybridContainerPool : NSObject
@property (nonatomic) NSMapTable containers;
- (id)containers;
- (id)init;
- (void)setContainers:;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
+ (id)sharedPool;
@end
