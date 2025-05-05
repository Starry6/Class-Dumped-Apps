@interface QQApiURLObject : QQApiObject
@property (nonatomic) Q targetContentType;
@property (nonatomic) NSURL url;
@property (nonatomic) NSData previewImageData;
@property (nonatomic) NSURL previewImageURL;
- (id)initWithURL:title:description:previewImageData:tagName:messageExt:targetContentType:;
- (id)initWithURL:title:description:previewImageData:targetContentType:;
- (id)initWithURL:title:description:previewImageURL:tagName:messageExt:targetContentType:;
- (id)initWithURL:title:description:previewImageURL:targetContentType:;
- (void)setPreviewImageURL:;
- (void)setTargetContentType:;
- (unsigned long long)targetContentType;
- (id)url;
- (id)initWithURL:;
- (void)setUrl:;
- (id)previewImageData;
- (void)setPreviewImageData:;
- (id)previewImageURL;
+ (id)objectWithURL:;
+ (id)objectWithURL:title:description:previewImageData:tagName:messageExt:targetContentType:;
+ (id)objectWithURL:title:description:previewImageData:targetContentType:;
+ (id)objectWithURL:title:description:previewImageURL:tagName:messageExt:targetContentType:;
+ (id)objectWithURL:title:description:previewImageURL:targetContentType:;
@end
