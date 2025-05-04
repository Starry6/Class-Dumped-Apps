@interface AWEFollowGroupCategoryModel : AWEBaseApiModel
@property (nonatomic) NSNumber groupID;
@property (nonatomic) NSString groupName;
@property (nonatomic) NSString groupDesc;
@property (nonatomic) Q actionType;
@property (nonatomic) BOOL isSpecialCreateItem;
@property (nonatomic) BOOL isSpecialEditGroupItem;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) Q category;
- (BOOL)isDefaulGroup;
- (id)groupDesc;
- (void)setGroupDesc:;
- (BOOL)isSpecialCreateItem;
- (void)setIsSpecialCreateItem:;
- (BOOL)isSpecialEditGroupItem;
- (void)setIsSpecialEditGroupItem:;
- (void)setGroupID:;
- (void)setGroupName:;
- (unsigned long long)actionType;
- (void)setIsSelected:;
- (void)setActionType:;
- (unsigned long long)category;
- (id)groupID;
- (BOOL)isSelected;
- (void)setCategory:;
- (id)groupName;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
