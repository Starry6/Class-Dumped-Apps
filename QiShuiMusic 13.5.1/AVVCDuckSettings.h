@interface AVVCDuckSettings : NSObject
@property (nonatomic) AVVCDuckOverride duckOverride;
@property (nonatomic) AVVCDuckFadeDuration fadeDuration;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)fadeDuration;
- (void)setFadeDuration:;
- (id)duckOverride;
- (void)setDuckOverride:;
@end
