@interface HTSLiveNormalPaidLinkmicDescContent : IESLivePBBaseMessage
@property (nonatomic) GPBInt64Array savedTagIdsArray;
@property (nonatomic) Q savedTagIdsArray_Count;
@property (nonatomic) NSMutableArray savedTagInfosArray;
@property (nonatomic) Q savedTagInfosArray_Count;
@property (nonatomic) NSString savedDesc;
@property (nonatomic) NSString reviewedDesc;
+ (id)descriptor;
@end
