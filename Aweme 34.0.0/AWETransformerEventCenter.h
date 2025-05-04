@interface AWETransformerEventCenter : NSObject
@property (nonatomic) NSMutableDictionary showTrackHistory;
@property (nonatomic) BOOL isAppear;
- (BOOL)isAppear;
- (void)setIsAppear:;
- (void)handleEvents:element:;
- (id)__mergeQueries:toWebViewURLString:;
- (id)__mergeQueries:toURLString:;
- (BOOL)hasReportShowTrackWithEventName:unique:;
- (void)addToHistoryWithShowEventName:unique:;
- (void)__cleanShowTrackHistory;
- (id)showTrackHistory;
- (void)setShowTrackHistory:;
- (id)init;
- (void).cxx_destruct;
+ (id)defaultCenter;
@end
