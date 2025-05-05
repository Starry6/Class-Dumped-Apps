@interface MSSaveEmail : MSMailDefaultService
- (void)_simulateServicesMethod:arguments:callback:;
- (void)_saveEmail:completionBlock:;
- (void)_saveMessageData:forAccountWithID:autosaveIdentifier:completionBlock:;
+ (void)placeholderAttachmentForFileName:fileSize:mimeType:contentID:completionBlock:;
+ (void)securityScopeForPlaceholderURL:completionBlock:;
+ (void)deletePlaceholderAttachmentForURL:completionBlock:;
+ (void)saveMessageData:forAccountWithID:autosaveIdentifier:completionBlock:;
+ (void)saveEmail:completionBlock:;
@end
