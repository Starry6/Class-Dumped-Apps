@interface AWEVideosInsertResult : NSObject
@property (nonatomic) Q insertPage;
@property (nonatomic) BOOL skipURLTransfer;
@property (nonatomic) NSDictionary loginTrackerInfo;
@property (nonatomic) BOOL requireLogin;
- (void)setRequireLogin:;
- (BOOL)requireLogin;
- (void)setInsertPage:;
- (void)setSkipURLTransfer:;
- (id)initWithInsertPage:skipURLTransfer:requireLogin:;
- (unsigned long long)insertPage;
- (BOOL)skipURLTransfer;
- (id)loginTrackerInfo;
- (void)setLoginTrackerInfo:;
- (void).cxx_destruct;
@end
