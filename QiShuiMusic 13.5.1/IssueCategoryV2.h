@interface IssueCategoryV2 : IESLivePBBaseMessage
@property (nonatomic) NSString content;
@property (nonatomic) q reportSerialId;
@property (nonatomic) NSInteger inputType;
@property (nonatomic) NSMutableArray subCategoriesArray;
@property (nonatomic) Q subCategoriesArray_Count;
@property (nonatomic) NSInteger feedbackType;
- (id)allSubCategoriesIssues;
- (id)allSubCategoriesIssues;
+ (id)descriptor;
@end
