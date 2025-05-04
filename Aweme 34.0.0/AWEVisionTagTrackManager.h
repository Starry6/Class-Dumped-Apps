@interface AWEVisionTagTrackManager : NSObject
+ (void)trackPauseTagClickAwemeModel:stickModel:enterFrom:pauseTime:awemeType:extraParams:;
+ (void)trackTrendingWordsClickAwemeModel:stickModel:enterFrom:extraParams:;
+ (void)trackPauseTagShowAwemeModel:stickModel:enterFrom:pauseTime:awemeType:extraParams:;
+ (void)trackTrendingWordsShowAwemeModel:stickModel:enterFrom:extraParams:;
+ (void)trackTagBoardShowEnterFrom:itemID:;
+ (void)trackTagBoardClickEnterFrom:itemID:clickType:;
+ (id)getTagType:;
@end
