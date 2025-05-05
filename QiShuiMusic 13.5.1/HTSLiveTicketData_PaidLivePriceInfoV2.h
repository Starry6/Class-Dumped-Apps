@interface HTSLiveTicketData_PaidLivePriceInfoV2 : IESLivePBBaseMessage
@property (nonatomic) NSString amount;
@property (nonatomic) NSString currency;
@property (nonatomic) q pos;
@property (nonatomic) GPBEnumArray payTypeArray;
@property (nonatomic) Q payTypeArray_Count;
+ (id)descriptor;
@end
