@interface BDUGSyncCursor : NSObject
@property (nonatomic) NSString did;
@property (nonatomic) NSString uid;
@property (nonatomic) q syncID;
@property (nonatomic) c topicType;
@property (nonatomic) c bucket;
@property (nonatomic) q recvCursor;
@property (nonatomic) q deliverCursor;
@property (nonatomic) q reportCursor;
- (void)setDid:;
- (id)did;
- (long long)deliverCursor;
- (long long)recvCursor;
- (long long)reportCursor;
- (void)setDeliverCursor:;
- (void)setRecvCursor:;
- (void)setReportCursor:;
- (void)setTopicType:;
- (id)uid;
- (void)setUid:;
- (void).cxx_destruct;
- (void)setBucket:;
- (char)bucket;
- (long long)syncID;
- (void)setSyncID:;
- (char)topicType;
@end
