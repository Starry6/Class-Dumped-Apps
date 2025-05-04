@interface AWECodeGenUserModel : AWECodeGenBaseCommonModel
@property (nonatomic) AWEUserModel userModel;
- (void)setupWithModelDictionary:;
- (id)userModel;
+ (id)AWECodeGenUserModel_Adapter_localPropertyKeysMap;
@end
