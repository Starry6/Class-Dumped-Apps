@interface WBSSiteIconKeyColorExtractorCache : NSObject
@property (nonatomic) UIColor color;
@property (nonatomic) {UIEdgeInsets=dddd} insets;
@property (nonatomic) double confidence;
@property (nonatomic) double nonTransparentConfidence;
- (double)confidence;
- (void)setConfidence:;
- (void)setColor:;
- (void)setInsets:;
- (id)insets;
- (id)color;
- (void).cxx_destruct;
- (double)nonTransparentConfidence;
- (void)setNonTransparentConfidence:;
@end
