@interface AWEIMAImojiAddHandler : NSObject
+ (id)contextWithArtStyle:completion:;
+ (id)uploadImageNode;
+ (id)batchAddNode;
+ (id)p_uploadTaskWithEmoticon:context:quality:;
+ (id)pipeline;
+ (id)endNode;
@end
