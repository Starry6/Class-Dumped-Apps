@interface MPStoreLyricsRequestOperation : MPAsyncOperation
@property (nonatomic) q songAdamID;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (id)init;
- (void)cancel;
- (id)responseHandler;
- (void)setResponseHandler:;
- (void).cxx_destruct;
- (void)finishWithError:;
- (void)_enqueueOperationWithURL:storeURLBag:allowingAuthentication:;
- (long long)songAdamID;
- (void)setSongAdamID:;
+ (BOOL)supportsLyricsForURLBag:;
+ (id)_lyricsURLForURLBag:;
@end
