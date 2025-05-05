@interface SkuPriceInfo : IESLivePBBaseMessage
@property (nonatomic) NSString startTime;
@property (nonatomic) NSString endTime;
@property (nonatomic) NSString price;
@property (nonatomic) q claimDdl;
@property (nonatomic) NSString douPrice;
@property (nonatomic) NSString fullPrice;
@property (nonatomic) NSString amount;
@property (nonatomic) NSString currency;
@property (nonatomic) q pos;
@property (nonatomic) NSString minPrice;
@property (nonatomic) TimeGearInfo timeGear;
@property (nonatomic) BOOL hasTimeGear;
@property (nonatomic) GPBEnumArray payTypeArray;
@property (nonatomic) Q payTypeArray_Count;
@property (nonatomic) NSString closingSellTime;
@property (nonatomic) NSString humanizedPrice;
@property (nonatomic) NSString humanizedFullPrice;
+ (id)descriptor;
@end
