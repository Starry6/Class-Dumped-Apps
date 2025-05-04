@interface AWEIMAwemeAddBatchEmoticon : NSObject
+ (void)addBatchEmojiWithAwemeModel:indexes:trackInfos:completion:;
+ (void)p_trackFavoriteEmojiWithIndexes:trackInfos:;
+ (void)p_requestAddBatchEmoticonsWithParams:trackInfos:completion:;
+ (void)p_getParamArrayWithAwemeModel:indexes:trackInfos:completion:;
+ (void)p_trackFavoriteEmojiConfirmStatusString:sticker:trackInfos:isNew:;
@end
