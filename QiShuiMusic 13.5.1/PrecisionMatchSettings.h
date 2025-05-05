@interface PrecisionMatchSettings : IESLivePBBaseMessage
@property (nonatomic) BOOL acceptPrecisionMatch;
@property (nonatomic) q precisionMatchPreferGender;
@property (nonatomic) q precisionMatchFrequency;
+ (id)descriptor;
@end
