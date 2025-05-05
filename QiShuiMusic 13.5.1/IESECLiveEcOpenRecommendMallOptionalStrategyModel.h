@interface IESECLiveEcOpenRecommendMallOptionalStrategyModel : IESLiveBridgeModel
@property (nonatomic) NSNumber maxNum;
@property (nonatomic) NSNumber showNum;
@property (nonatomic) NSNumber clickNum;
@property (nonatomic) NSNumber fillType;
@property (nonatomic) BOOL enableVM;
- (id)showNum;
- (id)clickNum;
- (BOOL)enableVM;
- (id)maxNum;
- (void)setClickNum:;
- (void)setEnableVM:;
- (void)setMaxNum:;
- (void)setShowNum:;
- (void).cxx_destruct;
- (id)fillType;
- (void)setFillType:;
+ (id)modelCustomPropertyMapper;
@end
