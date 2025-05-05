@interface IMSandboxedFileURL : IMSandboxedResource
- (id)initWithFileURL:;
- (char *)_sandboxExtensionForPID:;
- (id)initWithFileURL:destinationProcessPID:;
+ (Class)resourceClass;
@end
