@interface TMHookClipboardOfUIPasteboard : TMHook
- (BOOL)deferPreload;
+ (Class)pasteboardClass;
+ (id)stubbedClass;
+ (id)stubbedInstanceAPIs;
+ (void)preload;
+ (id)dataType;
+ (id)pipelineType;
@end
