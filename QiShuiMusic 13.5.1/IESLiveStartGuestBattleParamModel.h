@interface IESLiveStartGuestBattleParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber openType;
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSNumber loserNum;
@property (nonatomic) NSNumber scoreType;
@property (nonatomic) NSNumber isAnchorInvolved;
@property (nonatomic) NSNumber uiType;
- (id)isAnchorInvolved;
- (id)loserNum;
- (id)openType;
- (void)setIsAnchorInvolved:;
- (void)setLoserNum:;
- (void)setOpenType:;
- (void)setScoreType:;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)duration;
- (id)uiType;
- (void)setUiType:;
- (id)scoreType;
+ (id)modelCustomPropertyMapper;
@end
