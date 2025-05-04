@interface AWEFeatureBlockContext : NSObject
@property (nonatomic) NSMutableDictionary blockMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)blockMap;
- (void)setContextBlock:forKey:;
- (void)setBlockMap:;
- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:;
- (id)allKeys;
@end
