@interface SASTCompetingTeamPlayDetailHeaderItem : AceObject
@property (nonatomic) SAUIDecoratedText firstTeam;
@property (nonatomic) SAUIDecoratedText secondTeam;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)firstTeam;
- (void)setFirstTeam:;
- (id)secondTeam;
- (void)setSecondTeam:;
+ (id)competingTeamPlayDetailHeaderItem;
+ (id)competingTeamPlayDetailHeaderItemWithDictionary:context:;
@end
