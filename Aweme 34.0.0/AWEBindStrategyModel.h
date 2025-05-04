@interface AWEBindStrategyModel : MTLModel
@property (nonatomic) NSArray itemList;
@property (nonatomic) AWECodeGenOperationalStrategyModel redDotModel;
@property (nonatomic) AWECodeGenEntranceMsgConfigModel defaultMsgConfig;
@property (nonatomic) q taskCacheTime;
@property (nonatomic) NSArray clearCacheTaskList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)redDotModel;
- (void)setRedDotModel:;
- (id)defaultMsgConfig;
- (void)setDefaultMsgConfig:;
- (long long)taskCacheTime;
- (void)setTaskCacheTime:;
- (id)clearCacheTaskList;
- (void)setClearCacheTaskList:;
- (void).cxx_destruct;
- (id)itemList;
- (void)setItemList:;
+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
