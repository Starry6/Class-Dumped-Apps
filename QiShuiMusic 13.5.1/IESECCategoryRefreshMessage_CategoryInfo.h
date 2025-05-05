@interface IESECCategoryRefreshMessage_CategoryInfo : GPBMessage
@property (nonatomic) NSString uniqueIndex;
@property (nonatomic) NSString name;
@property (nonatomic) q categoryId;
@property (nonatomic) q categoryType;
@property (nonatomic) BOOL needReload;
+ (id)descriptor;
@end
