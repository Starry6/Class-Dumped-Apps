@interface PLURL : NSURL
- (void)dealloc;
- (id)replacementObjectForCoder:;
- (BOOL)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;
@end
