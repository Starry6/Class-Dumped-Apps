@interface AWEAdFollowUserParamModel : BDXBridgeModel
@property (nonatomic) NSString userID;
@property (nonatomic) NSNumber action;
@property (nonatomic) NSString creativeID;
@property (nonatomic) NSNumber from;
@property (nonatomic) NSNumber fromPreviouspage;
@property (nonatomic) NSNumber channelID;
@property (nonatomic) NSNumber fromPageType;
@property (nonatomic) NSNumber prePageType;
- (void)setCreativeID:;
- (void)setFromPageType:;
- (void)setPrePageType:;
- (id)prePageType;
- (id)fromPreviouspage;
- (void)setFromPreviouspage:;
- (id)fromPageType;
- (id)userID;
- (void)setChannelID:;
- (void)setAction:;
- (id)action;
- (id)channelID;
- (void).cxx_destruct;
- (void)setUserID:;
- (void)setFrom:;
- (id)from;
- (id)creativeID;
+ (id)JSONKeyPathsByPropertyKey;
@end
