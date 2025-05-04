@interface AWEGDBizAbilityManager : NSObject
@property (nonatomic) NSMutableDictionary bizAbilityDictionary;
- (id)bizAbilityDictionary;
- (void)setBizAbilityDictionary:;
- (id)getAbilityByBizCode:;
- (id)init;
- (void).cxx_destruct;
- (void)initData;
+ (void)_aweLazyRegisterLoad;
+ (id)manager;
@end
