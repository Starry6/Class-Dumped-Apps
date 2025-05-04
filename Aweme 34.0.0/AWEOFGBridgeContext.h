@interface AWEOFGBridgeContext : NSObject
@property (nonatomic) NSMapTable weakObjects;
@property (nonatomic) NSMapTable strongObjects;
- (void)setWeakObject:forKey:;
- (void)setStrongObject:forKey:;
- (id)weakObjects;
- (void)setWeakObjects:;
- (id)strongObjects;
- (void)setStrongObjects:;
- (id)mapTables;
- (id)init;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:;
@end
