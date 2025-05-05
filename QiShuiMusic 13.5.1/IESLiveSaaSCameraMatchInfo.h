@interface IESLiveSaaSCameraMatchInfo : BDDynamicMTLModel
@property (nonatomic) q matchId;
@property (nonatomic) q contentId;
@property (nonatomic) NSArray eventIdsArray;
@property (nonatomic) NSArray hideTabIdsArray;
@property (nonatomic) IESLiveSaaSToutiaoMatchData matchData;
@property (nonatomic) BOOL hasMatchData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasMatchData;
- (void)setHasMatchData:;
+ (id)matchDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
