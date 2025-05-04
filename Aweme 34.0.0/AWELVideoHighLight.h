@interface AWELVideoHighLight : MTLModel
@property (nonatomic) NSString highlightEpisodeId;
@property (nonatomic) NSString highlightItemId;
@property (nonatomic) NSNumber startTimeMsec;
@property (nonatomic) NSNumber endTimeMsec;
@property (nonatomic) NSString authToken;
@property (nonatomic) NSString highlightTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)startTimeMsec;
- (void)setStartTimeMsec:;
- (id)highlightEpisodeId;
- (void)setHighlightEpisodeId:;
- (id)highlightItemId;
- (void)setHighlightItemId:;
- (id)endTimeMsec;
- (void)setEndTimeMsec:;
- (id)highlightTitle;
- (void)setHighlightTitle:;
- (void)setAuthToken:;
- (id)authToken;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
