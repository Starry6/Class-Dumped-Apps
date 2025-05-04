@interface AWEGuideLunaPopViewRequestLyricInfo : AWEBaseApiModel
@property (nonatomic) AWEGuideLunaPopViewRequestLrcLyric lrc;
@property (nonatomic) AWEGuideLunaPopViewRequestKrcLyric krc;
- (id)lrc;
- (void)setLrc:;
- (id)krc;
- (void)setKrc:;
- (void).cxx_destruct;
+ (id)lrcJSONTransformer;
+ (id)krcJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
