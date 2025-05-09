@interface IESLiveRevenueInteractLynxInteractModel : IESLiveRevenueInteractLynxModel
@property (nonatomic) BOOL isMatching;
@property (nonatomic) q inviteType;
@property (nonatomic) q matchType;
@property (nonatomic) q interactStartTime;
@property (nonatomic) NSString linkAnchorInfo;
@property (nonatomic) NSString seiData;
@property (nonatomic) NSString screenData;
@property (nonatomic) NSString linkmicScore;
@property (nonatomic) q linkRecordTime;
- (id)seiData;
- (long long)interactStartTime;
- (long long)inviteType;
- (id)linkAnchorInfo;
- (long long)linkRecordTime;
- (id)linkmicScore;
- (id)screenData;
- (void)setInteractStartTime:;
- (void)setInviteType:;
- (void)setIsMatching:;
- (void)setLinkAnchorInfo:;
- (void)setLinkRecordTime:;
- (void)setLinkmicScore:;
- (void)setScreenData:;
- (void)setSeiData:;
- (void).cxx_destruct;
- (id)containerFrame;
- (long long)matchType;
- (void)setMatchType:;
- (BOOL)isMatching;
+ (id)JSONKeyPathsByPropertyKey;
@end
