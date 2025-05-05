@interface VEClipMattingConfig : NSObject
@property (nonatomic) NSString resultPath;
@property (nonatomic) AVAsset asset;
@property (nonatomic) IESMMVideoDataClipRange clipRange;
@property (nonatomic) q mediaType;
@property (nonatomic) NSURL picUrl;
@property (nonatomic) float rate;
- (id)clipRange;
- (id)picUrl;
- (id)resultPath;
- (void)setClipRange:;
- (void)setPicUrl:;
- (void)setResultPath:;
- (long long)mediaType;
- (void)setMediaType:;
- (void)setRate:;
- (id)init;
- (id)asset;
- (float)rate;
- (void).cxx_destruct;
- (void)setAsset:;
@end
