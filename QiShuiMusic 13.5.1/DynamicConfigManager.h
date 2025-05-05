@interface DynamicConfigManager : NSObject
@property (nonatomic) NSMutableDictionary textMapping;
@property (nonatomic) NSMutableDictionary urlMapping;
@property (nonatomic) NSMutableDictionary headerMapping;
- (void)loadConfigFromFile:;
- (void)saveConfigToFile;
- (id)configFilePath;
- (id)textMapping;
- (void)setTextMapping:;
- (id)urlMapping;
- (void)setUrlMapping:;
- (id)headerMapping;
- (void)setHeaderMapping:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
