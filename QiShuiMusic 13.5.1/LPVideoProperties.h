@interface LPVideoProperties : NSObject
@property (nonatomic) UIColor _overlappingControlsColor;
@property (nonatomic) BOOL hasAudio;
@property (nonatomic) NSString accessibilityText;
- (unsigned long long)hash;
- (void)setHasAudio:;
- (void).cxx_destruct;
- (BOOL)hasAudio;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)accessibilityText;
- (void)setAccessibilityText:;
- (id)_overlappingControlsColor;
- (void)_setOverlappingControlsColor:;
@end
