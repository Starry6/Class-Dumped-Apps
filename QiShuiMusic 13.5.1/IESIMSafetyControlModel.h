@interface IESIMSafetyControlModel : IESIMBaseApiModel
@property (nonatomic) BOOL needVideoPlayCheck;
@property (nonatomic) q potentialRiskLevel;
- (BOOL)needVideoPlayCheck;
- (long long)potentialRiskLevel;
- (void)setNeedVideoPlayCheck:;
- (void)setPotentialRiskLevel:;
+ (id)JSONKeyPathsByPropertyKey;
@end
