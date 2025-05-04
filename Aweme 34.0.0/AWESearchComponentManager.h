@interface AWESearchComponentManager : NSObject
@property (nonatomic) NSMapTable caches;
@property (nonatomic) NSMutableArray p_componentList;
@property (nonatomic) NSArray componentList;
- (void)setCaches:;
- (id)p_componentList;
- (void)setP_componentList:;
- (id)caches;
- (void)removeComponent:;
- (void).cxx_destruct;
- (void)addComponent:;
- (id)componentList;
- (void)insertComponent:atIndex:;
@end
