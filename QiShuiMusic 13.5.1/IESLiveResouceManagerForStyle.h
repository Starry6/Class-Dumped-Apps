@interface IESLiveResouceManagerForStyle : IESLiveResouceManager
@property (nonatomic) NSMutableDictionary allStyles;
@property (nonatomic) NSArray tables;
- (id)initWithAssetBundle:type:;
- (id)parseFromContent:;
- (id)parseValueStr:;
- (void)setAllStyles:;
- (void)setTables:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)tables;
- (id)allStyles;
@end
