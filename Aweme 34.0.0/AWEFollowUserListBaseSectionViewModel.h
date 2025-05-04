@interface AWEFollowUserListBaseSectionViewModel : AWERelationUserListBaseSectionViewModel
@property (nonatomic) q defaultSort;
- (id)enterFrom;
- (void)onClickUnFollowUserOnProfileMenu:trackerParam:;
- (BOOL)isFriends;
- (long long)defaultSort;
- (long long)type;
- (BOOL)isMine;
@end
