@interface IESLiveResouceManagerForString : IESLiveResouceManager
@property (nonatomic) NSArray tables;
@property (nonatomic) NSCache stringCache;
- (id)initWithAssetBundle:type:;
- (void)setTables:;
- (id)stringCache;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)setStringCache:;
- (id)tables;
@end
