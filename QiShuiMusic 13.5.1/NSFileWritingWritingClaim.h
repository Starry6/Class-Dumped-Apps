@interface NSFileWritingWritingClaim : NSFileAccessClaim
- (id)allURLs;
- (void)dealloc;
- (id)initWithPurposeID:url:options:url:options:claimer:;
- (void)forwardUsingConnection:crashHandler:;
- (BOOL)blocksClaim:;
- (BOOL)isBlockedByWritingItemAtLocation:options:;
- (id)initWithCoder:;
- (void)invokeClaimer;
- (void)devalueSelf;
- (void)encodeWithCoder:;
- (void)resolveURLsThenContinueInvokingClaimer:;
- (BOOL)isBlockedByReadingItemAtLocation:options:;
- (void)itemAtLocation:wasReplacedByItemAtLocation:;
- (void)protectFilesAgainstEviction;
- (BOOL)evaluateSelfWithRootNode:checkSubarbitrability:;
- (void)granted;
+ (BOOL)supportsSecureCoding;
@end
