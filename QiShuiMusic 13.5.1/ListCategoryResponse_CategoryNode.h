@interface ListCategoryResponse_CategoryNode : IESLivePBBaseMessage
@property (nonatomic) q categoryId;
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger level;
@property (nonatomic) NSMutableArray subCategorysArray;
@property (nonatomic) Q subCategorysArray_Count;
@property (nonatomic) q challengeId;
@property (nonatomic) NSString challengeName;
@property (nonatomic) NSString challengeIdStr;
@property (nonatomic) BOOL canChoose;
@property (nonatomic) NSString unchooseMsg;
@property (nonatomic) NSString categoryAppIos;
@property (nonatomic) NSMutableArray categoryAppAndroidArray;
@property (nonatomic) Q categoryAppAndroidArray_Count;
@property (nonatomic) q orientation;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString showType;
@property (nonatomic) BOOL isOtherCategory;
+ (id)descriptor;
@end
