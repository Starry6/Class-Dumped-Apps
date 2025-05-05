@interface HTSLiveDIYItemInfo : IESLivePBBaseMessage
@property (nonatomic) q diyItemId;
@property (nonatomic) NSString localItem;
@property (nonatomic) NSMutableDictionary values;
@property (nonatomic) Q values_Count;
@property (nonatomic) q fontAsset;
@property (nonatomic) q parentAsset;
@property (nonatomic) NSInteger type;
+ (id)descriptor;
@end
