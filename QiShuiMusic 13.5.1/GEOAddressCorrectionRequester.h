@interface GEOAddressCorrectionRequester : NSObject
- (void)cancelRequest:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startAddressCorrectionInitRequest:finished:error:;
- (void)startAddressCorrectionUpdateRequest:finished:error:;
+ (id)sharedRequester;
@end
