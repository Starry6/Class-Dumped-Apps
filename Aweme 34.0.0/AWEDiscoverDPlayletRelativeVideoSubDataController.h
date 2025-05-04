@interface AWEDiscoverDPlayletRelativeVideoSubDataController : AWEListDataController
@property (nonatomic) NSString seriesId;
@property (nonatomic) NSNumber tagId;
@property (nonatomic) <AWEDiscoverDPlayletRelativeVideoSubDataDelegate> delegate;
@property (nonatomic) NSMutableDictionary lynxGetAwemeListCallBackDict;
@property (nonatomic) NSMutableDictionary awemeModelCaches;
- (void)traceLogWithName:params:awemeModel:;
- (void)reloadWithPullType:Completion:;
- (id)lynxGetAwemeListCallBackDict;
- (void)setLynxGetAwemeListCallBackDict:;
- (id)awemeModelCaches;
- (void)setAwemeModelCaches:;
- (id)requestRelativePlayletVideoList:cursor:tag:pullDown:completeBlock:;
- (void)relativeRequestTraceLogWithParams:withError:apiModel:traceName:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setTagId:;
- (id)tagId;
- (id)seriesId;
- (void)setSeriesId:;
@end
