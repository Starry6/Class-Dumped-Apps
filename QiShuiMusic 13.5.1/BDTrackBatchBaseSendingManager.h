@interface BDTrackBatchBaseSendingManager : NSObject
@property (nonatomic) NSSet blockListv1;
@property (nonatomic) NSSet blockListv3;
- (void)setBlockListv1:;
- (void)setBlockListv3:;
- (id)blockListv1;
- (id)blockListv3;
- (void)endReportWithFrom:priority:;
- (void)forwardDataFrom:priority:;
- (id)reportStoragesForPriority:;
- (void)sendingDataInternalFrom:priority:;
- (void)startSendingDataFrom:;
- (void)startSendingDataFrom:priority:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareManager;
@end
