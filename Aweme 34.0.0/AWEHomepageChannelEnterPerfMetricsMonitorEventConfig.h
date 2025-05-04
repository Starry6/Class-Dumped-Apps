@interface AWEHomepageChannelEnterPerfMetricsMonitorEventConfig : MTLModel
@property (nonatomic) double repeatCallSceneDuration;
@property (nonatomic) BOOL sceneFPSRepresentationAll;
@property (nonatomic) NSArray sceneFPSRepresentation;
@property (nonatomic) NSDictionary sessionFPSTypeDic;
@property (nonatomic) NSArray sessionBaseFPSRepresentation;
@property (nonatomic) NSArray sessionDowngradeFPSRepresentation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)sceneFPSRepresentationAll;
- (void)setSceneFPSRepresentationAll:;
- (id)sceneFPSRepresentation;
- (void)setSceneFPSRepresentation:;
- (double)repeatCallSceneDuration;
- (void)setRepeatCallSceneDuration:;
- (id)sessionFPSTypeDic;
- (void)setSessionFPSTypeDic:;
- (id)sessionBaseFPSRepresentation;
- (void)setSessionBaseFPSRepresentation:;
- (id)sessionDowngradeFPSRepresentation;
- (void)setSessionDowngradeFPSRepresentation:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
