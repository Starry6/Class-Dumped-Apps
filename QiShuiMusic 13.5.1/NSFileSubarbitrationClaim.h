@interface NSFileSubarbitrationClaim : NSFileAccessClaim
@property (nonatomic) BOOL nullified;
@property (nonatomic) NSXPCConnection subarbiterConnection;
- (void)forwardReacquisitionForWritingClaim:withID:toPresenterForID:usingReplySender:;
- (void)dealloc;
- (id)subarbiterConnection;
- (void)revoked;
- (void)setSubarbiterConnection:;
- (void)forwardUsingConnection:crashHandler:;
- (BOOL)isBlockedByWritingItemAtLocation:options:;
- (id)initWithCoder:;
- (id)initWithReadingURLs:options:writingURLs:options:claimer:;
- (void)invokeClaimer;
- (void)devalueSelf;
- (void)encodeWithCoder:;
- (BOOL)nullified;
- (void)forwardUsingConnection:withServer:crashHandler:;
- (BOOL)isBlockedByReadingItemAtLocation:options:;
- (void)devalueOldClaim:;
- (void)itemAtLocation:wasReplacedByItemAtLocation:;
- (id)descriptionWithIndenting:;
- (id)relinquishmentForWrite:toPresenterForID:;
- (BOOL)evaluateSelfWithRootNode:checkSubarbitrability:;
- (void)granted;
- (void)forwardRelinquishmentForWritingClaim:withID:options:purposeID:subitemURL:toPresenter:usingReplySender:;
- (void)evaluateNewClaim:;
+ (BOOL)supportsSecureCoding;
@end
