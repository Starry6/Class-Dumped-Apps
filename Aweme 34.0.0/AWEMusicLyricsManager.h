@interface AWEMusicLyricsManager : NSObject
@property (nonatomic) YYCache yyCache;
- (id)yyCache;
- (void)setYyCache:;
- (id)init;
- (void).cxx_destruct;
+ (void)requestLyrics:type:previewStartTime:previewEndTime:musicId:completion:;
+ (id)errorCode:msg:;
+ (void)p_requestLyrics:type:previewStartTime:previewEndTime:musicId:completion:tracker:;
+ (id)filterUnavailableModels:previewStartTime:previewEndTime:;
+ (void)parserJson:completion:;
+ (void)parserLRC:completion:tracker:;
+ (void)parserKRC:completion:;
+ (long long)resolveLrcTimeTag:;
+ (id)shared;
+ (id)processModels:;
@end
