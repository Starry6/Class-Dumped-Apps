@interface AWEVideoCoverTextTabMonitor : NSObject
@property (nonatomic) double recommendTextStart;
@property (nonatomic) NSMutableDictionary stickerTrackInfoMap;
@property (nonatomic) NSMutableDictionary stickerBeginSelectedMap;
- (void)trackRecommendTextStart;
- (void)trackStickerApplyEnd:;
- (void)markStickerBeginSelected:;
- (void)updateStickerTrackInfo:stickerID:;
- (void)setRecommendTextStart:;
- (double)recommendTextStart;
- (void)trackRecommendTextEnd:;
- (id)stickerTrackInfoMap;
- (void)setStickerTrackInfoMap:;
- (id)stickerBeginSelectedMap;
- (void)setStickerBeginSelectedMap:;
- (id)init;
- (void).cxx_destruct;
+ (id)defaultMonitor;
@end
