@interface AWELogDataManager : NSObject
@property (nonatomic) NSMutableArray logData;
- (id)needSendLogData;
- (void)appendLogArray:;
- (void)appendLogData:;
- (void)clearPendingLogData;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setLogData:;
- (id)logData;
+ (id)shareManager;
@end
