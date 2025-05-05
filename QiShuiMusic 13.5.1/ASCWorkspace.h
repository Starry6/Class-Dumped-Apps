@interface ASCWorkspace : NSObject
@property (nonatomic) NSMutableDictionary pendingResults;
@property (nonatomic) NSOperationQueue openApplicationOperationQueue;
@property (nonatomic) NSRecursiveLock stateLock;
@property (nonatomic) BOOL extension;
- (BOOL)isExtension;
- (id)stateLock;
- (id)openURL:;
- (void).cxx_destruct;
- (id)_init;
- (void)openResourceOperationDidComplete:;
- (void)openResourceOperation:didFailWithError:;
- (id)pendingResults;
- (id)openSensitiveURL:;
- (id)openApplicationWithBundleIdentifier:payloadURL:;
- (void)openApplicationWithBundleIdentifier:usingOpenResourceOperationWithPayloadURL:options:pendingResult:;
- (void)openApplicationWithBundleIdentifier:configuration:pendingResult:;
- (id)openProductURL:;
- (id)openURL:frontBoardOptions:;
- (void)enqueueOpenApplicationOperation:pendingResult:;
- (id)popPendingResultForOperationName:;
- (id)openApplicationOperationQueue;
- (void)setOpenApplicationOperationQueue:;
+ (id)log;
+ (id)sharedWorkspace;
+ (void)withSharedWorkspace:perform:;
@end
