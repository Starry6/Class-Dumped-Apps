@interface HTSLiveDSLimitCalmPeriod : IESLivePBBaseMessage
@property (nonatomic) NSInteger leftTimeSecond;
@property (nonatomic) NSString popupText;
@property (nonatomic) BOOL needFaceRecognition;
@property (nonatomic) BOOL twoElementsVerified;
@property (nonatomic) NSInteger verifyType;
+ (id)descriptor;
@end
