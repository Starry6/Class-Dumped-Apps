@interface UIMorphingLabelGlyphSet : NSObject
@property (nonatomic) Q glyphCount;
@property (nonatomic) r^S glyphs;
@property (nonatomic) r^{CGRect={CGPoint=dd}{CGSize=dd}} glyphFrames;
@property (nonatomic) r^{CGPoint=dd} glyphPositions;
@property (nonatomic) NSArray glyphViews;
@property (nonatomic) NSAttributedString attributedString;
@property (nonatomic) {CGPoint=dd} lineOrigin;
@property (nonatomic) double lineWidth;
- (unsigned long long)glyphCount;
- (double)lineWidth;
- (void)dealloc;
- (id)lineOrigin;
- (void)placeGlyphs;
- (id)attributedString;
- (void)buildGlyphViews;
- (id)initWithLabel:attributedString:;
- (id)glyphPositions;
- (void).cxx_destruct;
- (id)glyphViews;
- (id)glyphFrames;
- (id)glyphs;
- (id)boundingRectForGlyphsInRange:;
- (void)removeGlyphs;
@end
