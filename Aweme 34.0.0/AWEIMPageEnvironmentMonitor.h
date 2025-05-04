@interface AWEIMPageEnvironmentMonitor : NSObject
@property (nonatomic) NSString pageName;
@property (nonatomic) BOOL notFirstSession;
@property (nonatomic) AWEIMPageEnvironmentMonitorSession currentSession;
@property (nonatomic) NSString trackerEventName;
@property (nonatomic) @? sampleRateInfoFetchBlock;
@property (nonatomic) @? extraInfoFetchBlock;
- (id)initWithPageName:;
- (id)trackerEventName;
- (id)sampleRateInfoFetchBlock;
- (void)setSampleRateInfoFetchBlock:;
- (id)fetchEnvironmentWithSession:fireType:;
- (id)extraInfoFetchBlock;
- (BOOL)notFirstSession;
- (void)setNotFirstSession:;
- (void)sessionEnd;
- (void)setExtraInfoFetchBlock:;
- (id)currentSession;
- (void)setCurrentSession:;
- (void).cxx_destruct;
- (void)sessionStart;
- (void)setupSession:;
- (id)pageName;
@end
