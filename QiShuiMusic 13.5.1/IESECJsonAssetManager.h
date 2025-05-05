@interface IESECJsonAssetManager : IESECAssetsManager
@property (nonatomic) NSString assetsPath;
@property (nonatomic) NSArray fileTables;
@property (nonatomic) NSMutableDictionary contentTables;
- (id)contentOfFileName:;
- (id)contentTables;
- (id)fileTables;
- (id)genFileTables;
- (id)initWithBundle:type:;
- (void)setContentTables:;
- (void)setFileTables:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)assetsPath;
- (void)setAssetsPath:;
@end
