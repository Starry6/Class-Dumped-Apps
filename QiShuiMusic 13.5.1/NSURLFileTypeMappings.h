@interface NSURLFileTypeMappings : NSObject
- (id)_init;
- (id)_UTIextensionForMIMEType:;
- (id)_UTIMIMETypeForExtension:;
- (id)MIMETypeForExtension:;
- (id)preferredExtensionForMIMEType:;
- (id)extensionsForMIMEType:;
+ (id)sharedMappings;
@end
