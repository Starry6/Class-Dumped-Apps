@interface AWETheaterCommonSectionItem : MTLModel
@property (nonatomic) q itemType;
@property (nonatomic) BOOL shouldAutoPlay;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWETheaterSectionItemBaseInfo baseInfo;
@property (nonatomic) AWETheaterSectionItemLongVideoInfo longVideoInfo;
@property (nonatomic) AWETheaterSectionItemPlayletInfo playletInfo;
@property (nonatomic) AWETheaterSectionItemLiveInfo liveInfo;
@property (nonatomic) AWETheaterSectionItemHistoryInfo historyInfo;
@property (nonatomic) BOOL isVideoItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)longVideoInfo;
- (id)baseInfo;
- (void)setBaseInfo:;
- (void)setLongVideoInfo:;
- (id)liveInfo;
- (void)setLiveInfo:;
- (id)playletInfo;
- (void)setPlayletInfo:;
- (void)setShouldAutoPlay:;
- (BOOL)isVideoItem;
- (id)historyInfo;
- (void)setHistoryInfo:;
- (long long)itemType;
- (void)setItemType:;
- (void).cxx_destruct;
- (BOOL)shouldAutoPlay;
+ (id)playletInfoJSONTransformer;
+ (id)awemeModelJSONTransformer;
+ (id)baseInfoJSONTransformer;
+ (id)historyInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)longVideoInfoJSONTransformer;
+ (id)liveInfoJSONTransformer;
@end
