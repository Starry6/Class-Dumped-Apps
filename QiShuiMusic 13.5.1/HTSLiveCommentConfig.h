@interface HTSLiveCommentConfig : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray commentColorsArray;
@property (nonatomic) Q commentColorsArray_Count;
@property (nonatomic) NSMutableArray commentRolesArray;
@property (nonatomic) Q commentRolesArray_Count;
@property (nonatomic) NSString roleSuffix;
@property (nonatomic) NSString roleTitle;
@property (nonatomic) NSString unlockRoleTip;
@property (nonatomic) NSMutableArray commentMedalsArray;
@property (nonatomic) Q commentMedalsArray_Count;
@property (nonatomic) NSString medalTitle;
+ (id)descriptor;
@end
