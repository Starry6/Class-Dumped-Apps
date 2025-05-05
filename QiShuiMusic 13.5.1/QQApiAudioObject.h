@interface QQApiAudioObject : QQApiURLObject
@property (nonatomic) NSURL flashURL;
- (id)flashURL;
- (void)setFlashURL:;
+ (id)objectWithURL:title:description:previewImageData:;
+ (id)objectWithURL:title:description:previewImageData:tagName:messageExt:;
+ (id)objectWithURL:title:description:previewImageURL:;
+ (id)objectWithURL:title:description:previewImageURL:tagName:messageExt:;
@end
