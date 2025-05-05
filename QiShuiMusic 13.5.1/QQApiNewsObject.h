@interface QQApiNewsObject : QQApiURLObject
+ (id)objectWithURL:title:description:previewImageData:;
+ (id)objectWithURL:title:description:previewImageData:tagName:messageExt:;
+ (id)objectWithURL:title:description:previewImageURL:;
+ (id)objectWithURL:title:description:previewImageURL:tagName:messageExt:;
@end
