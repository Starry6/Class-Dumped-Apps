@interface AWEPlayerSocketDynamicTimeoutManager : NSObject
@property (nonatomic) NSArray conditionConfigs;
@property (nonatomic) NSDictionary reflectDic;
@property (nonatomic) NSMutableDictionary speedPortraitDic;
@property (nonatomic) NSMutableDictionary blockPortraitDic;
- (id)getSocketOptions;
- (id)getBlockOptions;
- (BOOL)hasGetPortraits;
- (void)parseSocketTimeoutInfo:;
- (void)setConditionConfigs:;
- (id)speedPortraitDic;
- (id)blockPortraitDic;
- (id)conditionConfigs;
- (id)reflectDic;
- (void)setReflectDic:;
- (void)setSpeedPortraitDic:;
- (void)setBlockPortraitDic:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
