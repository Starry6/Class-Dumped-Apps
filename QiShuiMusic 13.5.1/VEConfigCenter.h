@interface VEConfigCenter : NSObject
@property (nonatomic) NSMutableDictionary VEABInfoDict;
@property (nonatomic) NSMutableArray VEABInfoRequestArr;
@property (nonatomic) @? valuePredicate;
- (void)p_configEffectABValue:key:type:;
- (id)getABInfoByKey:;
- (id)getEffectABInfoByKey:type:;
- (void)registerABTest;
- (id)requestVESDKABTestInfo;
- (id)VEABInfoDict;
- (void)configVESDKABValue:key:type:;
- (id)VEABInfoRequestArr;
- (void)setVEABInfoRequestArr:;
- (id)valuePredicate;
- (void)setValuePredicate:;
- (void)setVEABInfoDict:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
