@interface IESECCategoryInfo : GPBMessage
@property (nonatomic) NSInteger id_p;
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray promotionIdsArray;
@property (nonatomic) Q promotionIdsArray_Count;
@property (nonatomic) NSString type;
@property (nonatomic) NSString uniqueIndex;
+ (id)descriptor;
@end
