@interface AWEIMShareContactListFilterConfig : NSObject
@property (nonatomic) NSString taskType;
@property (nonatomic) BOOL forbidPublicGroup;
@property (nonatomic) NSArray allowGroupTypes;
@property (nonatomic) NSNumber maxGroupMemberCount;
@property (nonatomic) NSNumber minGroupMemberCount;
@property (nonatomic) NSString guideTitle;
@property (nonatomic) NSString guideSubtitle;
@property (nonatomic) NSString guideIconUrlString;
- (id)guideTitle;
- (void)setGuideTitle:;
- (id)guideSubtitle;
- (id)guideIconUrlString;
- (void)setGuideSubtitle:;
- (BOOL)forbidPublicGroup;
- (id)allowGroupTypes;
- (id)minGroupMemberCount;
- (id)maxGroupMemberCount;
- (void)setForbidPublicGroup:;
- (void)setAllowGroupTypes:;
- (void)setMaxGroupMemberCount:;
- (void)setMinGroupMemberCount:;
- (void)setGuideIconUrlString:;
- (id)taskType;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (void)setTaskType:;
@end
