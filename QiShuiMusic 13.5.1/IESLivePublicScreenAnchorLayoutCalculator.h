@interface IESLivePublicScreenAnchorLayoutCalculator : IESLivePublicScreenNormalLayoutCalculator
@property (nonatomic) NSMutableDictionary avoidHeightDic;
@property (nonatomic) NSString curHighestScene;
@property (nonatomic) Q heightType;
@property (nonatomic) double topAvoidHeight;
@property (nonatomic) BOOL enableHeightSetting;
- (void)updateHeightSetSwitchWithScene:;
- (id)curHighestScene;
- (id)avoidHeightDic;
- (double)calculateMessageListHeightWithConstHeight:;
- (unsigned long long)defaultHeightType;
- (BOOL)enableHeightSetting;
- (double)getSafeHeight:;
- (id)initWithDIContext:;
- (void)setAvoidHeightDic:;
- (void)setCurHighestScene:;
- (void)setEnableHeightSetting:;
- (void)setTopAvoidHeight:;
- (void)setTopAvoidHeight:withScene:;
- (double)topAvoidHeight;
- (void).cxx_destruct;
- (unsigned long long)heightType;
- (void)setHeightType:;
@end
