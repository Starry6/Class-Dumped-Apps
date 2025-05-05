@interface HTSLiveLuckyBoxMessage_Extra : IESLivePBBaseMessage
@property (nonatomic) NSMutableDictionary allDesc;
@property (nonatomic) Q allDesc_Count;
@property (nonatomic) NSMutableDictionary allImage;
@property (nonatomic) Q allImage_Count;
@property (nonatomic) NSInteger currentRound;
@property (nonatomic) NSInteger pct;
@property (nonatomic) GPBInt64Array roundTargetArray;
@property (nonatomic) Q roundTargetArray_Count;
+ (id)descriptor;
@end
