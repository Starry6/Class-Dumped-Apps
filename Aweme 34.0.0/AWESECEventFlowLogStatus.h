@interface AWESECEventFlowLogStatus : NSObject
@property (nonatomic) NSString sfwID;
@property (nonatomic) NSString fileName;
@property (nonatomic) NSString fileDir;
@property (nonatomic) NSString proto;
@property (nonatomic) BOOL reported;
@property (nonatomic) Q numberOfReportedPacks;
@property (nonatomic) Q numberOfReportedLogs;
- (id)fileDir;
- (id)sfwID;
- (unsigned long long)numberOfReportedPacks;
- (void)setNumberOfReportedPacks:;
- (unsigned long long)numberOfReportedLogs;
- (void)setNumberOfReportedLogs:;
- (id)init;
- (void)encodeWithCoder:;
- (id)fileName;
- (id)proto;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (BOOL)reported;
- (void)setReported:;
+ (id)eventFlowLogDir;
+ (void)storeCurrentStatus;
+ (id)currentStatus;
+ (BOOL)supportsSecureCoding;
+ (id)lastStatus;
@end
