@interface HTSLivePriceInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray priceListArray;
@property (nonatomic) Q priceListArray_Count;
+ (id)descriptor;
@end
