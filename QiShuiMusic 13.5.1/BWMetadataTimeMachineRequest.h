@interface BWMetadataTimeMachineRequest : NSObject
- (void)complete;
- (id)init;
- (void)dealloc;
- (void)waitForCompletionWithTimeout:;
@end
