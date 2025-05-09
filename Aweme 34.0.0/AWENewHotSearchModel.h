@interface AWENewHotSearchModel : AWEBaseApiModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSNumber cellHeight;
@property (nonatomic) BOOL isModelSelected;
@property (nonatomic) q videoIndex;
@property (nonatomic) BOOL isLastHotSpot;
@property (nonatomic) NSNumber showExpandAnimatonCount;
@property (nonatomic) BOOL hasExpand;
@property (nonatomic) q index;
@property (nonatomic) BOOL hasTracked;
@property (nonatomic) BOOL isOffline;
@property (nonatomic) BOOL hasExpandRelateSpot;
@property (nonatomic) BOOL hasSelectMainSpot;
@property (nonatomic) BOOL isRisingHotSpot;
@property (nonatomic) q totalCount;
@property (nonatomic) BOOL hasCompleteLoadMore;
@property (nonatomic) NSString mainSpotWord;
@property (nonatomic) q mainSpotIndex;
@property (nonatomic) BOOL isRelateHotSpot;
@property (nonatomic) BOOL isFirstRelateHotSpot;
@property (nonatomic) BOOL isLastRelateHotSpot;
@property (nonatomic) q boardType;
@property (nonatomic) NSString boardSubType;
@property (nonatomic) NSString cityCodeOnNearbyBoard;
@property (nonatomic) BOOL requestDataGotEmpty;
@property (nonatomic) BOOL isOtherHotSpot;
@property (nonatomic) BOOL hasNewDetailBoardInfo;
@property (nonatomic) BOOL alreadyTrackNewDetailBoard;
@property (nonatomic) BOOL alreadyDisplayContentPanel;
@property (nonatomic) NSString hotSpotID;
@property (nonatomic) NSString word;
@property (nonatomic) Q labelType;
@property (nonatomic) NSString labelTypeURL;
@property (nonatomic) NSNumber hotCount;
@property (nonatomic) NSString searchWord;
@property (nonatomic) NSString challengeID;
@property (nonatomic) NSString groupID;
@property (nonatomic) AWEURLModel imageURL;
@property (nonatomic) AWEHotSearchAdDataModel adData;
@property (nonatomic) q rankPatternType;
@property (nonatomic) q rankPosition;
@property (nonatomic) q realTrendingRank;
@property (nonatomic) NSNumber videoCount;
@property (nonatomic) NSString awemeID;
@property (nonatomic) BOOL canExpand;
@property (nonatomic) NSString schema;
@property (nonatomic) q wordType;
@property (nonatomic) NSString customizedLabel;
@property (nonatomic) NSArray relateSpots;
@property (nonatomic) NSNumber eventTime;
@property (nonatomic) NSNumber viewCount;
@property (nonatomic) AWEHotSpotDetailInfo detailInfo;
@property (nonatomic) NSString hotListServerParamStr;
@property (nonatomic) AWEHotSearchPostAwemeInfoModel postAwemeInfo;
@property (nonatomic) AWEHotSearchChallengeInfoModel challengeAwemeInfo;
@property (nonatomic) NSString hotSpotDescription;
@property (nonatomic) q displayStyle;
@property (nonatomic) NSNumber roomCount;
@property (nonatomic) NSNumber discussVideoCount;
@property (nonatomic) NSArray wordSubBoard;
@property (nonatomic) NSNumber nodeType;
@property (nonatomic) q videoGroupID;
@property (nonatomic) NSString parentHotSpotID;
@property (nonatomic) NSNumber nodeIndex;
@property (nonatomic) NSString nodeSpotID;
@property (nonatomic) NSNumber onListTime;
@property (nonatomic) q maxRank;
@property (nonatomic) q rank;
- (id)getContentString;
- (id)getDisplayWord;
- (id)getSearchWord;
- (long long)getRankPosition;
- (double)getTagPadding;
- (long long)defaultStyle;
- (void)setVideoIndex:;
- (BOOL)hasTracked;
- (void)setHasTracked:;
- (void)setAwemeID:;
- (id)awemeID;
- (id)discussVideoCount;
- (id)hotSpotID;
- (long long)videoIndex;
- (id)detailInfo;
- (void)setDetailInfo:;
- (long long)rankPosition;
- (void)setRankPosition:;
- (id)searchWord;
- (id)roomCount;
- (long long)boardType;
- (void)setBoardType:;
- (id)mainSpotWord;
- (long long)videoGroupID;
- (id)parentHotSpotID;
- (id)nodeSpotID;
- (void)setMainSpotWord:;
- (void)setHotSpotID:;
- (BOOL)alreadyDisplayContentPanel;
- (void)setAlreadyDisplayContentPanel:;
- (void)setVideoGroupID:;
- (id)relateSpots;
- (long long)mainSpotIndex;
- (BOOL)isRelateHotSpot;
- (BOOL)isRisingHotSpot;
- (BOOL)isSameHotSpotModel:;
- (BOOL)needDisplayGrayStyle;
- (void)setIsRelateHotSpot:;
- (id)boardSubType;
- (void)setBoardSubType:;
- (BOOL)isHotSpotEventVideo;
- (long long)countForProgressView;
- (BOOL)requestDataGotEmpty;
- (id)postAwemeInfo;
- (void)setPostAwemeInfo:;
- (BOOL)isLastRelateHotSpot;
- (void)setHasExpandRelateSpot:;
- (void)setHasCompleteLoadMore:;
- (void)setRequestDataGotEmpty:;
- (id)cityCodeOnNearbyBoard;
- (id)customizedLabel;
- (long long)rankPatternType;
- (id)hotCount;
- (id)labelTypeURL;
- (BOOL)isOtherHotSpot;
- (void)setHasSelectMainSpot:;
- (BOOL)hasSelectMainSpot;
- (BOOL)hasExpandRelateSpot;
- (long long)realTrendingRank;
- (BOOL)isFirstRelateHotSpot;
- (id)hotSpotDescription;
- (id)wordSubBoard;
- (void)setCityCodeOnNearbyBoard:;
- (void)setMainSpotIndex:;
- (void)setIsFirstRelateHotSpot:;
- (void)setIsLastRelateHotSpot:;
- (void)setRealTrendingRank:;
- (void)setParentHotSpotID:;
- (void)setIsRisingHotSpot:;
- (void)setNodeSpotID:;
- (id)challengeAwemeInfo;
- (id)onListTime;
- (id)hotListServerParamStr;
- (BOOL)isModelSelected;
- (BOOL)isLastHotSpot;
- (id)showExpandAnimatonCount;
- (BOOL)hasExpand;
- (void)setIsModelSelected:;
- (void)setIsLastHotSpot:;
- (void)setShowExpandAnimatonCount:;
- (void)setHasExpand:;
- (void)setHotSpotDescription:;
- (BOOL)hasNewDetailBoardInfo;
- (BOOL)alreadyTrackNewDetailBoard;
- (BOOL)hasCompleteLoadMore;
- (void)setHasNewDetailBoardInfo:;
- (void)setAlreadyTrackNewDetailBoard:;
- (void)setIsOtherHotSpot:;
- (void)setLabelTypeURL:;
- (void)setHotCount:;
- (void)setSearchWord:;
- (void)setRankPatternType:;
- (void)setCustomizedLabel:;
- (void)setRelateSpots:;
- (void)setHotListServerParamStr:;
- (void)setChallengeAwemeInfo:;
- (void)setRoomCount:;
- (void)setDiscussVideoCount:;
- (void)setWordSubBoard:;
- (void)setOnListTime:;
- (void)setIndex:;
- (id)schema;
- (void)setGroupID:;
- (long long)index;
- (void)setDisplayStyle:;
- (id)nodeType;
- (void)setSchema:;
- (id)groupID;
- (long long)totalCount;
- (unsigned long long)labelType;
- (id)viewCount;
- (void)setLabelType:;
- (long long)rank;
- (id)adData;
- (long long)displayStyle;
- (void)setRank:;
- (id)imageURL;
- (BOOL)isOffline;
- (void).cxx_destruct;
- (void)setIsOffline:;
- (void)setAdData:;
- (void)setImageURL:;
- (void)setEventTime:;
- (id)eventTime;
- (id)cellHeight;
- (void)setCellHeight:;
- (void)setViewCount:;
- (long long)topicType;
- (id)word;
- (void)setWord:;
- (void)setVideoCount:;
- (id)videoCount;
- (void)setNodeType:;
- (void)setTotalCount:;
- (id)nodeIndex;
- (void)setNodeIndex:;
- (BOOL)canExpand;
- (id)challengeID;
- (void)setCanExpand:;
- (long long)maxRank;
- (void)setChallengeID:;
- (void)setMaxRank:;
- (void)setWordType:;
- (long long)wordType;
+ (id)imageURLJSONTransformer;
+ (id)adDataJSONTransformer;
+ (id)detailInfoJSONTransformer;
+ (id)relateSpotsJSONTransformer;
+ (id)postAwemeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
