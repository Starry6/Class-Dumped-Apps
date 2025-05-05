@interface NSFileMultipleAccessClaim : NSFileAccessClaim
- (id)allURLs;
- (id)initWithPurposeID:intents:claimer:;
- (void)dealloc;
- (void)forwardUsingConnection:crashHandler:;
- (BOOL)blocksClaim:;
- (BOOL)isBlockedByWritingItemAtLocation:options:;
- (id)initWithCoder:;
- (BOOL)shouldCancelInsteadOfWaiting;
- (void)invokeClaimer;
- (void)devalueSelf;
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (void)encodeWithCoder:;
- (BOOL)isBlockedByReadingItemAtLocation:options:;
- (void)itemAtLocation:wasReplacedByItemAtLocation:;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:;
- (void)protectFilesAgainstEviction;
- (BOOL)evaluateSelfWithRootNode:checkSubarbitrability:;
- (void)granted;
+ (BOOL)supportsSecureCoding;
@end
