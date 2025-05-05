@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration
@property (nonatomic) NSString backgroundType;
@property (nonatomic) BOOL effectShowsValue;
- (id)init;
- (void)dealloc;
- (void)setShouldRespectOutputBlending:;
- (void)setEffectShowsValue:;
- (BOOL)shouldIgnoreForegroundColor;
- (id)backgroundType;
- (BOOL)shouldRespectOutputBlending;
- (BOOL)effectShowsValue;
- (id)description;
- (void)setBackgroundType:;
- (void)setSelectionType:;
- (id)copyWithZone:;
@end
