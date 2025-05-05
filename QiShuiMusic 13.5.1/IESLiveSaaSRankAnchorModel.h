@interface IESLiveSaaSRankAnchorModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSUserModel user;
@property (nonatomic) NSNumber firePower;
@property (nonatomic) NSNumber rank;
@property (nonatomic) NSString gapDescribe;
@property (nonatomic) NSNumber delta;
@property (nonatomic) NSString richTitle;
@property (nonatomic) NSString cityCode;
@property (nonatomic) NSString gapRichDescription;
@property (nonatomic) NSArray shopTags;
@property (nonatomic) NSString fixedFooterDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)firePower;
- (id)gapDescribe;
- (id)delta;
- (id)rank;
- (id)user;
- (void).cxx_destruct;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
