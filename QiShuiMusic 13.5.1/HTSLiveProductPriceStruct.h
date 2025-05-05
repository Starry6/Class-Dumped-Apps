@interface HTSLiveProductPriceStruct : IESLivePBBaseMessage
@property (nonatomic) NSString amount;
@property (nonatomic) NSString currency;
@property (nonatomic) q pos;
@property (nonatomic) GPBInt32Array payTypeArray;
@property (nonatomic) Q payTypeArray_Count;
@property (nonatomic) NSString fullPrice;
@property (nonatomic) q countdownTimestamp;
@property (nonatomic) NSString start;
+ (id)descriptor;
@end
