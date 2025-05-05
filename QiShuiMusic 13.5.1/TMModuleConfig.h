@interface TMModuleConfig : NSObject
@property (nonatomic) NSDictionary rawData;
@property (nonatomic) BOOL enable;
- (BOOL)canAsyncInit;
- (Class)moduleClass;
- (id)submodules;
- (BOOL)enable;
- (void)setRawData:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)description;
- (id)rawData;
- (void)setEnable:;
+ (id)identifier;
+ (id)configKey;
@end
