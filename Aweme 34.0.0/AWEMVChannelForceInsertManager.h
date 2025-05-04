@interface AWEMVChannelForceInsertManager : NSObject
@property (nonatomic) AWEMVChannelPageContext context;
@property (nonatomic) BOOL forceInsertIsRequesting;
- (BOOL)forceInsertIsRequesting;
- (void)fetchEntranceStrategyWithCompletion:;
- (void)setForceInsertIsRequesting:;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (long long)calculateNoNeedRevisitVideo;
@end
