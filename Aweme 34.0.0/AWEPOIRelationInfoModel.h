@interface AWEPOIRelationInfoModel : MTLModel
@property (nonatomic) NSString relation;
@property (nonatomic) NSArray socialRelations;
@property (nonatomic) NSString rankDesc;
@property (nonatomic) NSArray recommReasons;
@property (nonatomic) NSArray pubOpinions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rankDesc;
- (void)setRankDesc:;
- (id)socialRelations;
- (void)setSocialRelations:;
- (id)recommReasons;
- (void)setRecommReasons:;
- (id)pubOpinions;
- (void)setPubOpinions:;
- (void)setRelation:;
- (void).cxx_destruct;
- (id)relation;
+ (BOOL)automaticallyDefaultMapping;
@end
