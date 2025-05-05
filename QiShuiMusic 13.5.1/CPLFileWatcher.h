@interface CPLFileWatcher : NSObject
@property (nonatomic) NSURL fileURL;
@property (nonatomic) NSString name;
@property (nonatomic) <CPLFileWatcherDelegate> delegate;
- (id)redactedDescription;
- (void)setDelegate:;
- (void)_forceRefreshWatchingNode;
- (void)_stopWatchingNode;
- (id)initWithFileURL:name:delegate:queue:;
- (void)_stopWatchingParent;
- (void)stopWatching;
- (id)initWithFileURL:delegate:queue:;
- (id)delegate;
- (void)startWatching;
- (void).cxx_destruct;
- (void)_updateWatchingNode;
- (void)_startWatchingParent;
- (id)fileURL;
- (id)description;
- (void)_startWatchingNode;
- (id)name;
@end
