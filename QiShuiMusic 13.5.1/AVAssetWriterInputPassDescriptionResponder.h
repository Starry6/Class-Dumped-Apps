@interface AVAssetWriterInputPassDescriptionResponder : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithCallbackQueue:block:;
- (void)respondToNewPassDescription:;
- (void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
- (void)stopRespondingToPassDescriptions;
- (BOOL)_hasStoppedResponding;
@end
