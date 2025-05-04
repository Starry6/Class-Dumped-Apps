@interface AWECodeGenAwemeGuideDanmakuShowLimitsModel : AWEBaseDataModel
@property (nonatomic) q minDanmakuCount;
@property (nonatomic) q minVideoDuration;
@property (nonatomic) q showVideoInterval;
@property (nonatomic) q scene;
- (long long)minDanmakuCount;
- (long long)showVideoInterval;
- (void)setMinDanmakuCount:;
- (void)setShowVideoInterval:;
- (void)setScene:;
- (long long)minVideoDuration;
- (long long)scene;
- (void)setMinVideoDuration:;
+ (id)JSONKeyPathsByPropertyKey;
@end
