@interface SASportsTeamRank : AceObject
@property (nonatomic) NSNumber position;
@property (nonatomic) NSNumber primary;
@property (nonatomic) NSString source;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPosition:;
- (id)primary;
- (void)setPrimary:;
- (id)position;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)source;
- (void)setSource:;
+ (id)teamRank;
+ (id)teamRankWithDictionary:context:;
@end
