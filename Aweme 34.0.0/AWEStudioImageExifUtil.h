@interface AWEStudioImageExifUtil : NSObject
+ (id)modifyImage:userComment:;
+ (id)modifyImageData:userComment:;
+ (void)writeImageToAlbum:block:;
@end
