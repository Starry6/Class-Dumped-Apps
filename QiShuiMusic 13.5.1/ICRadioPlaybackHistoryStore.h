@interface ICRadioPlaybackHistoryStore : NSObject
@property (nonatomic) NSURL containerDirectoryURL;
@property (nonatomic) ICUserIdentityStore userIdentityStore;
- (void)flushWithCompletionHandler:;
- (id)init;
- (id)userIdentityStore;
- (void).cxx_destruct;
- (id)initWithContainerDirectoryURL:;
- (id)initWithContainerDirectoryURL:identityStore:;
- (id)initWithIdentityStore:;
- (void)getHistoryForStationWithIdentifier:userIdentity:completionHandler:;
- (void)removeHistoryForStationWithIdentifier:userIdentity:completionHandler:;
- (void)updateHistoryForStationWithIdentifier:userIdentity:usingBlock:;
- (void)updateHistoryForStationWithIdentifier:userIdentity:usingBlock:completionHandler:;
- (id)_fileURLForStationWithIdentifier:identityKey:;
- (void)_getCacheKeyForUserIdentity:completionHandler:;
- (id)_playbackHistoryOfClass:forStationWithIdentifier:identityKey:error:;
- (id)containerDirectoryURL;
+ (id)_defaultContainerURL;
@end
