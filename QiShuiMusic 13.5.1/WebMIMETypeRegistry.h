@interface WebMIMETypeRegistry : NSObject
+ (id)preferredExtensionForMIMEType:;
+ (id)mimeTypeForExtension:;
+ (BOOL)isSupportedImageMIMEType:;
+ (BOOL)isSupportedMediaMIMEType:;
@end
