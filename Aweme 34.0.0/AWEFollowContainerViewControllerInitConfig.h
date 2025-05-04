@interface AWEFollowContainerViewControllerInitConfig : NSObject
@property (nonatomic) AWEFeedTableViewControllerResumeConfig resumeConfig;
@property (nonatomic) BOOL needClearCache;
- (void)setResumeConfig:;
- (id)resumeConfig;
- (void)setNeedClearCache:;
- (BOOL)needClearCache;
- (void).cxx_destruct;
@end
