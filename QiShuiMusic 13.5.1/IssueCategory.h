@interface IssueCategory : IESLivePBBaseMessage
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) NSString category;
@property (nonatomic) NSMutableArray issuesArray;
@property (nonatomic) Q issuesArray_Count;
- (BOOL)isSelected;
- (BOOL)isSelected;
- (void)setIsSelected:;
- (void)setIsSelected:;
+ (id)descriptor;
@end
