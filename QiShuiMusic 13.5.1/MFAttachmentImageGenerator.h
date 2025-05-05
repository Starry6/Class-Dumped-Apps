@interface MFAttachmentImageGenerator : UIView
- (void)drawRect:;
- (void).cxx_destruct;
- (id)image;
- (id)initWithAttachment:;
- (id)imageRect;
- (id)pngData;
+ (double)defaultHeight;
+ (id)pngDataForAttachment:;
+ (id)imageForAttachment:;
+ (id)imageRectForAttachment:;
@end
