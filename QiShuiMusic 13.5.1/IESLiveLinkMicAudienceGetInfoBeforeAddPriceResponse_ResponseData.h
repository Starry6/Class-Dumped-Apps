@interface IESLiveLinkMicAudienceGetInfoBeforeAddPriceResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) q addPriceValue;
@property (nonatomic) NSInteger addPriceStrategy;
@property (nonatomic) q addPriceMultiple;
@property (nonatomic) q rankAfterAddPrice;
@property (nonatomic) NSMutableArray addPriceStepsArray;
@property (nonatomic) Q addPriceStepsArray_Count;
@property (nonatomic) q maxAddPriceValue;
+ (id)descriptor;
@end
