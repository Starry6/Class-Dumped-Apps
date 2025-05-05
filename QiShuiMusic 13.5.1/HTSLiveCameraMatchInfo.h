@interface HTSLiveCameraMatchInfo : IESLivePBBaseMessage
@property (nonatomic) q matchId;
@property (nonatomic) q contentId;
@property (nonatomic) GPBInt64Array eventIdsArray;
@property (nonatomic) Q eventIdsArray_Count;
@property (nonatomic) GPBInt64Array hideTabIdsArray;
@property (nonatomic) Q hideTabIdsArray_Count;
+ (id)descriptor;
@end
