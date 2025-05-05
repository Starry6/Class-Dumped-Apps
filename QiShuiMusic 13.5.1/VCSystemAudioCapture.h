@interface VCSystemAudioCapture : VCObject
- (void)dealloc;
- (BOOL)start;
- (BOOL)stop;
- (id)initWithConfiguration:;
- (id)newAudioTapWithAudioStreamBasicDescription:;
- (void)setupCannedAudioInjection;
+ (BOOL)isValidConfiguration:;
+ (id)newAudioTapWithProcessID:audioFormat:;
+ (unsigned int)audioTapSessionTypeForInternalSessionType:;
+ (id)newAudioTapWithSessionType:audioFormat:;
+ (id)newAudioTapWithCaptureContext:audioFormat:;
@end
