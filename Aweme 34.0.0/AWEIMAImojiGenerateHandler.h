@interface AWEIMAImojiGenerateHandler : NSObject
+ (id)contextWithImage:artStyle:updateClosure:;
+ (id)uploadImageNode;
+ (id)rootDirectoryWithUid:autoCreated:;
+ (id)imageProcessNode;
+ (id)uploadFaceNode;
+ (id)pollGenerateNode;
+ (void)preloadImageWithRawData:taskID:context:;
+ (void)renderingData:rawDic:taskID:context:sampleRate:;
+ (id)p_pathWithSubPath:autoCreated:;
+ (void)cleanupDiskCache;
+ (id)pipeline;
+ (id)endNode;
@end
