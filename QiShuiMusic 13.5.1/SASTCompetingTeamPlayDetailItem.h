@interface SASTCompetingTeamPlayDetailItem : AceObject
@property (nonatomic) BOOL firstEntity;
@property (nonatomic) SAUIDecoratedText playDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)firstEntity;
- (void)setFirstEntity:;
- (id)playDetail;
- (void)setPlayDetail:;
+ (id)competingTeamPlayDetailItem;
+ (id)competingTeamPlayDetailItemWithDictionary:context:;
@end
