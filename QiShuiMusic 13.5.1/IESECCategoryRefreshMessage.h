@interface IESECCategoryRefreshMessage : GPBMessage
@property (nonatomic) NSMutableArray categoryInfoArray;
@property (nonatomic) Q categoryInfoArray_Count;
@property (nonatomic) q updateTs;
@property (nonatomic) NSString updateToast;
+ (id)descriptor;
@end
