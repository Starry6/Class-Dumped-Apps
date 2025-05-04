@interface AWELogDataManager : NSObject
@property (nonatomic) NSMutableArray logData;
- (void)appendLogData:;
- (void)appendLogArray:;
- (id)needSendLogData;
- (void)clearPendingLogData;
- (id)init;
- (id)logData;
- (void)dealloc;
- (void)setLogData:;
- (void).cxx_destruct;
+ (id)shareManager;
@end
