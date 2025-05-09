@interface AWESearchHotSpotConfigModel : AWEBaseApiModel
@property (nonatomic) NSNumber discussNums;
@property (nonatomic) NSString discussShotText;
@property (nonatomic) NSString hotSpotId;
@property (nonatomic) NSString hotSpotTitle;
@property (nonatomic) NSNumber hotSpotType;
@property (nonatomic) NSString musicId;
@property (nonatomic) NSString doujuId;
@property (nonatomic) NSNumber isShow;
@property (nonatomic) BOOL isGrayMode;
@property (nonatomic) NSString topicTitle;
@property (nonatomic) NSString topicBottomText;
@property (nonatomic) NSNumber topicBottomBarType;
@property (nonatomic) NSNumber topicChallengeId;
@property (nonatomic) NSArray challengeIdList;
@property (nonatomic) NSNumber challengeType;
@property (nonatomic) NSNumber interactionStyle;
@property (nonatomic) AWETopicSearchBottomBarChallengeInfo challengeInfo;
@property (nonatomic) NSNumber publishType;
@property (nonatomic) BOOL publishOptimize;
@property (nonatomic) BOOL publishPageEnable;
@property (nonatomic) NSString scene;
@property (nonatomic) BOOL hideVoiceSearch;
@property (nonatomic) NSString hotspotSentence;
@property (nonatomic) AWEHotSearchBottomBarConfigButtonInfo buttonInfo;
@property (nonatomic) AWEHotSearchBottomBarConfigInsertInfo insertInfo;
- (id)challengeInfo;
- (void)setChallengeInfo:;
- (void)setMusicId:;
- (id)isShow;
- (id)hotSpotId;
- (void)setHotSpotId:;
- (id)musicId;
- (void)setIsShow:;
- (id)challengeIdList;
- (void)setChallengeIdList:;
- (id)buttonInfo;
- (void)setButtonInfo:;
- (void)setHotSpotType:;
- (id)hotSpotType;
- (id)hotspotSentence;
- (void)setHotspotSentence:;
- (id)topicChallengeId;
- (id)publishType;
- (void)setPublishType:;
- (id)interactionStyle;
- (void)setInteractionStyle:;
- (id)insertInfo;
- (void)setInsertInfo:;
- (id)discussNums;
- (void)setDiscussNums:;
- (void)setDiscussShotText:;
- (id)hotSpotTitle;
- (void)setHotSpotTitle:;
- (BOOL)isGrayMode;
- (void)setIsGrayMode:;
- (void)setTopicBottomText:;
- (void)setTopicBottomBarType:;
- (void)setChallengeType:;
- (void)setPublishPageEnable:;
- (void)setHideVoiceSearch:;
- (long long)getBottomBarConfigType;
- (id)topicBottomBarType;
- (BOOL)publishOptimize;
- (void)setDoujuId:;
- (BOOL)hideVoiceSearch;
- (id)discussShotText;
- (id)topicBottomText;
- (id)doujuId;
- (void)setPublishOptimize:;
- (void)setTopicChallengeId:;
- (BOOL)publishPageEnable;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)topicTitle;
- (void)setTopicTitle:;
- (id)challengeType;
+ (id)insertInfoJSONTransformer;
+ (id)challengeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)buttonInfoJSONTransformer;
@end
