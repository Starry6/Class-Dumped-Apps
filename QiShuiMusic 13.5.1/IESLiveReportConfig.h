@interface IESLiveReportConfig : NSObject
@property (nonatomic) Q reportSource;
@property (nonatomic) NSString requestPage;
@property (nonatomic) HTSLiveUser currentUser;
@property (nonatomic) HTSLiveUserPreviewConfig config;
@property (nonatomic) Q myRole;
@property (nonatomic) Q itsRole;
- (void)setRequestPage:;
- (unsigned long long)itsRole;
- (unsigned long long)myRole;
- (unsigned long long)reportSource;
- (id)requestPage;
- (void)setItsRole:;
- (void)setMyRole:;
- (void)setReportSource:;
- (void)setCurrentUser:;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)currentUser;
- (id)config;
@end
