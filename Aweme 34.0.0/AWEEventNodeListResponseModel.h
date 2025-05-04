@interface AWEEventNodeListResponseModel : AWEBaseApiModel
@property (nonatomic) NSString mainHotSpotTitle;
@property (nonatomic) NSNumber eventTime;
@property (nonatomic) NSArray eventNodeList;
@property (nonatomic) BOOL loadmoreHasMore;
- (void)setLoadmoreHasMore:;
- (BOOL)loadmoreHasMore;
- (id)eventNodeList;
- (id)mainHotSpotTitle;
- (void)setMainHotSpotTitle:;
- (void)setEventNodeList:;
- (void).cxx_destruct;
- (void)setEventTime:;
- (id)eventTime;
+ (id)eventNodeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
