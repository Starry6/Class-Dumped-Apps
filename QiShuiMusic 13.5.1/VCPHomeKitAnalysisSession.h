@interface VCPHomeKitAnalysisSession : NSObject
- (id)connection;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (void)processResults:withReply:;
- (id)initWithProperties:withResultsHandler:andInterruptionHandler:;
- (void)processVideoFragmentAssetData:withOptions:andErrorHandler:;
- (void)processVideoFragmentAssetData:withOptions:andCompletionHandler:;
- (void)processMessageWithOptions:andCompletionHandler:;
+ (id)sessionWithProperties:andResultsHandler:;
+ (id)sessionWithProperties:withResultsHandler:andInterruptionHandler:;
@end
