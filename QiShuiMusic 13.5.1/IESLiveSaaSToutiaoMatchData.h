@interface IESLiveSaaSToutiaoMatchData : BDDynamicMTLModel
@property (nonatomic) NSString matchIdStr;
@property (nonatomic) q matchId;
@property (nonatomic) NSString matchTitle;
@property (nonatomic) IESLiveSaaSAgainst against;
@property (nonatomic) q matchStatus;
@property (nonatomic) NSString matchStartTime;
@property (nonatomic) BOOL hasAgainst;
@property (nonatomic) NSString matchGroup;
@property (nonatomic) NSString matchRound;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasAgainst;
+ (id)againstJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
