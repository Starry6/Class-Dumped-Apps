@interface AWEIMStrategyRegisterTriple : NSObject
@property (nonatomic) NSMutableDictionary indexNodes;
@property (nonatomic) NSString sceneString;
@property (nonatomic) NSString responseBizKey;
@property (nonatomic) # modelClass;
@property (nonatomic) NSDictionary configDict;
- (id)sceneString;
- (id)responseBizKey;
- (id)initWithSceneString:bizKey:modelClass:;
- (void)p_configDictLock;
- (id)indexNodes;
- (void)p_configDictUnLock;
- (void)setIndexNodes:;
- (id)configDict;
- (void)setConfigDict:;
- (void).cxx_destruct;
- (Class)modelClass;
@end
