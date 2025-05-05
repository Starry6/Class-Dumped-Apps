@interface CNCardGameCenterGroup : CNCardGroup
@property (nonatomic) NSArray relationshipResults;
- (void).cxx_destruct;
- (id)displayItems;
- (id)initWithContact:relationshipResults:;
- (id)relationshipResults;
- (void)setRelationshipResults:;
+ (BOOL)relationshipResultsContainsFriend:;
+ (BOOL)shouldShowAddFriendActionForRelationshipResults:;
+ (id)actionForRelationshipResults:forContact:;
@end
