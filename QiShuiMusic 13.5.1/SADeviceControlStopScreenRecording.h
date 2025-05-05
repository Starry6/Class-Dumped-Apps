@interface SADeviceControlStopScreenRecording : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)stopScreenRecording;
+ (id)stopScreenRecordingWithDictionary:context:;
@end
