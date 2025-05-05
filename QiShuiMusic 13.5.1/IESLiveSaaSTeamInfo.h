@interface IESLiveSaaSTeamInfo : BDDynamicMTLModel
@property (nonatomic) q teamId;
@property (nonatomic) NSString teamName;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) IESLiveSaaSImage teamIcon;
@property (nonatomic) BOOL hasTeamIcon;
@property (nonatomic) IESLiveSaaSImage teamBadge;
@property (nonatomic) BOOL hasTeamBadge;
@property (nonatomic) IESLiveSaaSImage teamBackground;
@property (nonatomic) BOOL hasTeamBackground;
@property (nonatomic) NSString systemMsg;
@property (nonatomic) NSString teamIdStr;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasTeamBackground;
- (BOOL)hasTeamBadge;
- (BOOL)hasTeamIcon;
+ (id)teamBackgroundJSONTransformer;
+ (id)teamBadgeJSONTransformer;
+ (id)teamIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
