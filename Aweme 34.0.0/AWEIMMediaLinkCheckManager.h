@interface AWEIMMediaLinkCheckManager : NSObject
@property (nonatomic) NSMutableSet reportedMessageID;
@property (nonatomic) NSLock lock;
- (id)reportedMessageID;
- (void)addReportedMsgID:;
- (BOOL)checkIfReportedWithServerMsgID:;
- (void)setReportedMessageID:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
