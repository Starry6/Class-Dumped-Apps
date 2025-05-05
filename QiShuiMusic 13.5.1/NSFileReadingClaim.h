@interface NSFileReadingClaim : NSFileAccessClaim
- (id)allURLs;
- (void)dealloc;
- (void)forwardUsingConnection:crashHandler:;
- (void)resolveURLThenMaybeContinueInvokingClaimer:;
- (BOOL)blocksClaim:;
- (BOOL)isBlockedByWritingItemAtLocation:options:;
- (id)initWithCoder:;
- (BOOL)shouldCancelInsteadOfWaiting;
- (void)invokeClaimer;
- (void)devalueSelf;
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (void)encodeWithCoder:;
- (id)initWithPurposeID:url:options:claimer:;
- (BOOL)isBlockedByReadingItemAtLocation:options:;
- (void)itemAtLocation:wasReplacedByItemAtLocation:;
- (void)protectFilesAgainstEviction;
- (BOOL)evaluateSelfWithRootNode:checkSubarbitrability:;
- (void)granted;
+ (BOOL)supportsSecureCoding;
@end
