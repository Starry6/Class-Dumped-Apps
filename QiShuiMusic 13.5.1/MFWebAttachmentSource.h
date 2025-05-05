@interface MFWebAttachmentSource : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (void)removeAttachmentForURL:;
- (id)attachmentForURL:;
- (BOOL)setAttachment:forURL:;
+ (id)_setOfAllSources;
+ (id)allSources;
@end
