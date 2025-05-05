@interface HTSLiveTrayEffectMessage_ComboInfo : IESLivePBBaseMessage
@property (nonatomic) q seqId;
@property (nonatomic) GPBInt64Array numListArray;
@property (nonatomic) Q numListArray_Count;
@property (nonatomic) GPBInt64Array durationListArray;
@property (nonatomic) Q durationListArray_Count;
+ (id)descriptor;
@end
