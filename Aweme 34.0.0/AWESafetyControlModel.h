@interface AWESafetyControlModel : AWEBaseApiModel
@property (nonatomic) BOOL needVideoPlayCheck;
@property (nonatomic) q potentialRiskLevel;
- (BOOL)needVideoPlayCheck;
- (void)setNeedVideoPlayCheck:;
- (long long)potentialRiskLevel;
- (void)setPotentialRiskLevel:;
+ (id)JSONKeyPathsByPropertyKey;
@end
