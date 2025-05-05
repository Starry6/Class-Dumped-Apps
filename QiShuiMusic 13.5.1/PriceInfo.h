@interface PriceInfo : IESLivePBBaseMessage
@property (nonatomic) NSString amount;
@property (nonatomic) NSString currency;
@property (nonatomic) q pos;
@property (nonatomic) GPBEnumArray payTypeArray;
@property (nonatomic) Q payTypeArray_Count;
@property (nonatomic) NSString fullPrice;
+ (id)descriptor;
@end
