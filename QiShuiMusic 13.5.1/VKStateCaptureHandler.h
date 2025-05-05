@interface VKStateCaptureHandler : NSObject
- (void)_unregisterHandlerforStateCapture;
- (void)dealloc;
- (id)initWithQueue:withName:withCallback:;
- (void).cxx_destruct;
- (id)_stateCapture;
- (id).cxx_construct;
- (void)_registerHandlerforStateCapture:;
+ (id)stateDataForDictionary:title:;
@end
