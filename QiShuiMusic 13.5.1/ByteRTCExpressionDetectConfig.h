@interface ByteRTCExpressionDetectConfig : NSObject
@property (nonatomic) BOOL enableAgeDetect;
@property (nonatomic) BOOL enableGenderDetect;
@property (nonatomic) BOOL enableEmotionDetect;
@property (nonatomic) BOOL enableAttractivenessDetect;
@property (nonatomic) BOOL enableHappinessDetect;
- (BOOL)enableAgeDetect;
- (void)setEnableAgeDetect:;
- (BOOL)enableGenderDetect;
- (void)setEnableGenderDetect:;
- (BOOL)enableEmotionDetect;
- (void)setEnableEmotionDetect:;
- (BOOL)enableAttractivenessDetect;
- (void)setEnableAttractivenessDetect:;
- (BOOL)enableHappinessDetect;
- (void)setEnableHappinessDetect:;
@end
