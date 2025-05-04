@interface AWEFollowContainerGroupModel : NSObject
@property (nonatomic) NSString groupName;
@property (nonatomic) Q actionType;
@property (nonatomic) Q category;
- (id)initWithGroupCategoryModel:;
- (unsigned long long)actionType;
- (unsigned long long)category;
- (BOOL)isCustomGroup;
- (id)groupName;
- (void).cxx_destruct;
@end
