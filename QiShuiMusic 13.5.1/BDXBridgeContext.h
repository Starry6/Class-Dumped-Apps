@interface BDXBridgeContext : NSObject
@property (nonatomic) NSMapTable weakObjects;
@property (nonatomic) NSMapTable strongObjects;
- (void)setWeakObjects:;
- (id)mapTables;
- (void)mergeWithContext:;
- (void)setStrongObject:forKey:;
- (void)setStrongObjects:;
- (void)setWeakObject:forKey:;
- (id)strongObjects;
- (id)weakObjects;
- (id)init;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
