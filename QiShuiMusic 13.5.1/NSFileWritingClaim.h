@interface NSFileWritingClaim : NSFileAccessClaim
- (id)allURLs;
- (void)dealloc;
- (void)forwardUsingConnection:crashHandler:;
- (BOOL)blocksClaim:;
- (BOOL)isBlockedByWritingItemAtLocation:options:;
- (id)initWithCoder:;
- (void)invokeClaimer;
- (void)devalueSelf;
- (void)encodeWithCoder:;
- (void)resolveURLsThenContinueInvokingClaimer:;
- (id)initWithPurposeID:url:options:claimer:;
- (BOOL)isBlockedByReadingItemAtLocation:options:;
- (void)itemAtLocation:wasReplacedByItemAtLocation:;
- (void)protectFilesAgainstEviction;
- (BOOL)evaluateSelfWithRootNode:checkSubarbitrability:;
- (void)granted;
+ (BOOL)supportsSecureCoding;
@end
