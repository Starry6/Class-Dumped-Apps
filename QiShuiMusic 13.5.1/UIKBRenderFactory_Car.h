@interface UIKBRenderFactory_Car : UIKBRenderFactory
@property (nonatomic) double carScale;
- (long long)assetIdiom;
- (id)backgroundTraitsForKeyplane:;
- (id)_traitsForKey:onKeyplane:;
- (void)customizeLanguageIndicatorTraitsForTraits:;
- (id)globalKeyImageName;
- (id)deleteKeyImageName;
- (id)deleteOnKeyImageName;
- (id)shiftKeyImageName;
- (id)shiftOnKeyImageName;
- (id)shiftLockImageName;
- (double)skinnyKeyThreshold;
- (id)displayContentsForKey:;
- (void)_customizeGeometry:forKey:contents:onKeyplane:;
- (double)carScale;
- (id)dividerColor;
- (id)enabledKeyColor;
- (id)activeKeyColor;
- (id)highlightedKeyColor;
- (double)defaultKeyFontSize;
@end
