@interface MTPageEventHandler : MTStandardEventHandler
@property (nonatomic) NSMutableArray trackedPageHistory;
@property (nonatomic) <MTPageEventHandlerDelegate> delegate;
- (id)eventType;
- (void).cxx_destruct;
- (id)knownFields;
- (id)eventVersion:;
- (id)pageHistory:;
- (id)trackedPageHistory;
- (void)updatePageHistoryWithPage:;
- (void)didCreateMetricsData:;
- (void)setTrackedPageHistory:;
@end
