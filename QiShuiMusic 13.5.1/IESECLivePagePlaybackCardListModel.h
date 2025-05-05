@interface IESECLivePagePlaybackCardListModel : IESECLiveApiBaseModel
@property (nonatomic) NSArray replayCards;
@property (nonatomic) NSArray pageTimeStamp;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSNumber serverTime;
- (void)setReplayCards:;
- (id)pageTimeStamp;
- (id)replayCards;
- (void)setPageTimeStamp:;
- (void)setServerTime:;
- (void)setCount:;
- (void).cxx_destruct;
- (id)serverTime;
- (id)count;
+ (id)replayCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
