@interface AWEVideoCoverEditorTextMonitor : NSObject
@property (nonatomic) double recommendTextStart;
@property (nonatomic) NSMutableDictionary stickerTrackInfoMap;
@property (nonatomic) NSMutableDictionary stickerBeginSelectedMap;
- (void)trackRecommendTextStart;
- (void)setRecommendTextStart:;
- (double)recommendTextStart;
- (void)trackRecommendTextEnd:;
- (id)stickerTrackInfoMap;
- (void)setStickerTrackInfoMap:;
- (id)stickerBeginSelectedMap;
- (void)setStickerBeginSelectedMap:;
- (id)init;
- (void).cxx_destruct;
+ (id)textTemplateDownloadTimeKey:;
+ (id)textTemplateUseTrackerWithProjectUUID:;
+ (id)textTemplateUseEventKey;
+ (void)markStartDownloadTextTemplate:project:;
+ (void)trackDownloadTextTemplate:project:error:;
+ (void)markStartApplyTextTemplate:project:extraParams:;
+ (void)markEndApplyTextTemplate:project:error:;
+ (void)markStartUseTextTemplate:project:extraParams:;
+ (void)trackUseTextTemplate:project:extraParams:;
+ (id)sharedMonitor;
@end
