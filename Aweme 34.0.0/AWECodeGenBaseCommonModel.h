@interface AWECodeGenBaseCommonModel : AWEBaseDataModel
@property (nonatomic) NSDictionary modelDictionary;
- (id)toJSONDictionary;
- (id)modelDictionary;
- (void)setModelDictionary:;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)modelWithJSONDictionary:sharedModelInfos:;
+ (id)localPropertyKeysMap;
@end
