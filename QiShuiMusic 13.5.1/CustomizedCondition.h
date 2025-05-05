@interface CustomizedCondition : IESLivePBBaseMessage
@property (nonatomic) NSInteger conditionType;
@property (nonatomic) NSString description_p;
@property (nonatomic) NSString remarks;
@property (nonatomic) GPBInt64Array countDownsArray;
@property (nonatomic) Q countDownsArray_Count;
@property (nonatomic) NSString bizInfo;
+ (id)descriptor;
@end
