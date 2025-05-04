@interface AWEFeedBSConfigPicker : HTSService
@property (nonatomic) NSMutableDictionary cilentPortraitDic;
@property (nonatomic) NSMutableDictionary serverPortraitDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)generateConditionModel:;
- (void)getBitrateConfigInfo;
- (id)getBSConfigInfo:;
- (void)mockModelInfo:;
- (void)updatePortrait;
- (id)getNearestQualityTypeWithModel:;
- (long long)getGearVqmResultWithModel:;
- (id)getAvgQualityDiffWithModel:;
- (id)serverPortraitDic;
- (id)getBSPortraitDicWith:;
- (void)displayDebugInfo:bsAutoBitrateModel:allModels:filterModels:;
- (id)cilentPortraitDic;
- (void)setCilentPortraitDic:;
- (void)setServerPortraitDic:;
- (id)init;
- (void).cxx_destruct;
@end
