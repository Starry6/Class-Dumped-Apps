@interface INCWidgetIntentProvider : NSObject
- (void)provideIntentWithOptions:completionHandler:;
- (id)intentsExtensionForExtension:compatibleWithIntent:error:;
@end
