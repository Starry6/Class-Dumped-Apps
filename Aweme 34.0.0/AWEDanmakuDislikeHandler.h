@interface AWEDanmakuDislikeHandler : NSObject
@property (nonatomic) NSMutableDictionary dislikeDanmakus;
@property (nonatomic) q dislikeCount;
- (long long)dislikeCount;
- (void)setDislikeCount:;
- (void)resetDislikeCount;
- (void)addDislikeDanmakuModel:;
- (void)removeDislikeDanmakuModel:;
- (BOOL)canShownDislikeToastWithModel:;
- (void)markDislikeToastShowWithModel:;
- (id)dislikeDanmakus;
- (BOOL)shouldShieldDanmakuModel:;
- (void)setDislikeDanmakus:;
- (void).cxx_destruct;
- (void)reset;
@end
