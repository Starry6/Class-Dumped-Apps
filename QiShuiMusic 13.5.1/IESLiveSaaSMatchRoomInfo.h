@interface IESLiveSaaSMatchRoomInfo : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSMatchTabFrame matchTabFrame;
@property (nonatomic) IESLiveSaaSToutiaoMatchData matchData;
@property (nonatomic) HTSLiveSaaSMatchTitle matchTitle;
@property (nonatomic) NSString themeId;
@property (nonatomic) IESLiveSaaSImage shareIcon;
@property (nonatomic) HTSLiveSaaSMatchShareBackground matchShareBackground;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)matchShareBackground;
- (void)setMatchShareBackground:;
- (void).cxx_destruct;
+ (id)matchDataJSONTransformer;
+ (id)matchShareBackgroundJSONTransformer;
+ (id)matchTabFrameJSONTransformer;
+ (id)matchTitleJSONTransformer;
+ (id)shareIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
