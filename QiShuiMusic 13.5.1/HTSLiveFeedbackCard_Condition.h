@interface HTSLiveFeedbackCard_Condition : IESLivePBBaseMessage
@property (nonatomic) q fromTime;
@property (nonatomic) q toTime;
@property (nonatomic) GPBInt64Array actionIdsArray;
@property (nonatomic) Q actionIdsArray_Count;
@property (nonatomic) q actionType;
@property (nonatomic) q previewTime;
+ (id)descriptor;
@end
