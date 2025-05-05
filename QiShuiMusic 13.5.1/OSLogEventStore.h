@interface OSLogEventStore : NSObject
@property (nonatomic) NSURL _archiveURL;
@property (nonatomic) NSArray _relativeFilePaths;
@property (nonatomic) @? _progressHandler;
@property (nonatomic) @? _upgradeHandler;
- (void)setProgressHandler:;
- (void)prepareWithCompletionHandler:;
- (void).cxx_destruct;
- (id)_progressHandler;
- (id)initWithArchiveURL:;
- (id)_archiveURL;
- (id)initWithArchiveURL:relativePaths:;
- (void)setUpgradeConfirmationHandler:;
- (void)set_archiveURL:;
- (id)_relativeFilePaths;
- (void)set_relativeFilePaths:;
- (void)set_progressHandler:;
- (id)_upgradeHandler;
- (void)set_upgradeHandler:;
+ (id)localStore;
+ (id)storeWithArchiveURL:;
+ (id)storeWithFileURL:;
+ (id)storeWithArchiveURL:relativePaths:;
@end
