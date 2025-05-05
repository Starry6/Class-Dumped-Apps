@interface BDMannorClientAIConfigModel : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) NSString scene;
@property (nonatomic) NSArray hostList;
@property (nonatomic) NSString hostConfigVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hostConfigVersion;
- (id)hostList;
- (void)setHostConfigVersion:;
- (void)setHostList:;
- (BOOL)enable;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
