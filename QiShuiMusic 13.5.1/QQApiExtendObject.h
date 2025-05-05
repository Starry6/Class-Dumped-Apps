@interface QQApiExtendObject : QQApiObject
@property (nonatomic) NSData data;
@property (nonatomic) NSData previewImageData;
@property (nonatomic) NSArray imageDataArray;
- (id)initWithData:previewImageData:title:description:imageDataArray:;
- (id)imageDataArray;
- (id)initWithData:previewImageData:title:description:;
- (id)initWithData:previewImageData:title:description:imageDataArray:tagName:messageExt:;
- (id)initWithData:previewImageData:title:description:tagName:messageExt:;
- (void)setImageDataArray:;
- (id)data;
- (void)setData:;
- (id)previewImageData;
- (void)setPreviewImageData:;
+ (id)objectWithData:previewImageData:title:description:;
+ (id)objectWithData:previewImageData:title:description:imageDataArray:;
+ (id)objectWithData:previewImageData:title:description:imageDataArray:tagName:messageExt:;
+ (id)objectWithData:previewImageData:title:description:tagName:messageExt:;
@end
