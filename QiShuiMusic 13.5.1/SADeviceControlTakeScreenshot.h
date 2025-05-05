@interface SADeviceControlTakeScreenshot : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)takeScreenshot;
+ (id)takeScreenshotWithDictionary:context:;
@end
