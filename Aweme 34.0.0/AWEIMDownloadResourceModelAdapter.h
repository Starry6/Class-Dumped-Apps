@interface AWEIMDownloadResourceModelAdapter : NSObject
+ (id)transferCommonEmojiResToDownloadModel:;
+ (id)collectResourceWith:resourceType:;
+ (id)transferSpecialEmojiResToDownloadModel:;
+ (id)transferInteractiveResToDownloadModel:;
+ (id)transferInteractiveDynamicResToDownloadModel:;
+ (id)getDownloadResourceModelWith:type:name:;
+ (id)commonBigAnimationReoucesWith:;
+ (id)collectResourceWith:;
+ (id)getDownloadResourcePathWith:type:name:;
@end
