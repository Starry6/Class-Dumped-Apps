@interface LNConnectionManager : NSObject
@property (nonatomic) NSMutableDictionary connectionsByBundleIdentifier;
@property (nonatomic) LNTranscriptPrivilegedProvider transcriptProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)removeConnection:;
- (void)connection:didCloseWithError:;
- (void).cxx_destruct;
- (void)addConnection:;
- (void)invalidateAllConnections;
- (id)connectionForBundleIdentifier:appBundleIdentifier:error:;
- (void)donateActionRecord:completionHandler:;
- (id)connectionsByBundleIdentifier;
- (id)transcriptProvider;
+ (id)sharedInstance;
@end
