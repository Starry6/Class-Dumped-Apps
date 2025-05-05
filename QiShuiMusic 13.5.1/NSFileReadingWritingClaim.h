@interface NSFileReadingWritingClaim : NSFileAccessClaim
- (id)allURLs;
- (void)dealloc;
- (void)forwardUsingConnection:crashHandler:;
- (BOOL)blocksClaim:;
- (BOOL)isBlockedByWritingItemAtLocation:options:;
- (id)initWithCoder:;
- (BOOL)shouldCancelInsteadOfWaiting;
- (void)invokeClaimer;
- (void)devalueSelf;
- (void)encodeWithCoder:;
- (BOOL)isBlockedByReadingItemAtLocation:options:;
- (void)itemAtLocation:wasReplacedByItemAtLocation:;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:;
- (id)initWithPurposeID:readingURL:options:writingURL:options:claimer:;
- (void)protectFilesAgainstEviction;
- (BOOL)evaluateSelfWithRootNode:checkSubarbitrability:;
- (void)granted;
+ (BOOL)supportsSecureCoding;
@end
