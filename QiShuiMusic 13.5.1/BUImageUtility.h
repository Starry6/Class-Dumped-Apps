@interface BUImageUtility : NSObject
+ (id)bu_safeImageWithData:;
+ (id)imageFormatForImageData:;
+ (id)imageWithMime:data:scale:;
+ (id)imageWithData:;
+ (id)imageWithData:scale:;
@end
