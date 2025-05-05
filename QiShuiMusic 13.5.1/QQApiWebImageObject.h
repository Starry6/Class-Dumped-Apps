@interface QQApiWebImageObject : QQApiObject
@property (nonatomic) NSURL previewImageURL;
- (id)initWithPreviewImageURL:title:description:;
- (id)initWithPreviewImageURL:title:description:tagName:messageExt:;
- (void)setPreviewImageURL:;
- (id)previewImageURL;
+ (id)objectWithPreviewImageURL:title:description:tagName:messageExt:;
+ (id)objectWithPreviewImageURL:title:description:;
@end
