@interface HTSLiveProductPriceRichText : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray richTextsArray;
@property (nonatomic) Q richTextsArray_Count;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
+ (id)descriptor;
@end
