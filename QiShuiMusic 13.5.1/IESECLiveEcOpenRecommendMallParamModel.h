@interface IESECLiveEcOpenRecommendMallParamModel : IESLiveBridgeModel
@property (nonatomic) NSString mallScheme;
@property (nonatomic) IESECLiveEcOpenRecommendMallOptionalStrategyModel optionalStrategy;
@property (nonatomic) NSString needActionParamsType;
@property (nonatomic) NSString btm;
@property (nonatomic) NSDictionary bcm;
- (id)bcm;
- (id)btm;
- (void)setBcm:;
- (void)setBtm:;
- (id)mallScheme;
- (id)needActionParamsType;
- (id)optionalStrategy;
- (void)setMallScheme:;
- (void)setNeedActionParamsType:;
- (void)setOptionalStrategy:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
