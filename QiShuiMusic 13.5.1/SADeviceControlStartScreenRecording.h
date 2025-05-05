@interface SADeviceControlStartScreenRecording : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)startScreenRecording;
+ (id)startScreenRecordingWithDictionary:context:;
@end
