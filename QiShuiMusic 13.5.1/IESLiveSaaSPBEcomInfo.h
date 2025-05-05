@interface IESLiveSaaSPBEcomInfo : GPBMessage
@property (nonatomic) NSInteger ecomType;
@property (nonatomic) IESLiveSaaSPBShopHeaderInfo shopHeaderInfo;
@property (nonatomic) BOOL hasShopHeaderInfo;
@property (nonatomic) IESLiveSaaSPBWindowHeaderInfo windowHeaderInfo;
@property (nonatomic) BOOL hasWindowHeaderInfo;
@property (nonatomic) GPBInt32ObjectDictionary ecomWallBgs;
@property (nonatomic) Q ecomWallBgs_Count;
@property (nonatomic) NSString titleColor;
@property (nonatomic) NSString contentColor;
+ (id)descriptor;
@end
