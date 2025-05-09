@interface PRMonogram : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) Q fontIndex;
@property (nonatomic) UIColor color;
@property (nonatomic) PRMonogramColor monogramColor;
@property (nonatomic) UIColor plateFlatColor;
@property (nonatomic) UIColor plateGradientStartColor;
@property (nonatomic) UIColor plateGradientEndColor;
@property (nonatomic) UIColor plateSelectedActiveColor;
@property (nonatomic) UIColor plateSelectedInactiveColor;
@property (nonatomic) UIColor plateSelectedActiveTextColor;
- (id)init;
- (void)_takeValuesFromDataRepresentation:;
- (id)plateGradientEndColor;
- (id)stringAttributesForDiameter:;
- (void)setColor:;
- (void)setText:;
- (id)plateFlatColor;
- (void)appendToRecipe:text:fontIndex:;
- (void)setMonogramColor:;
- (id)_initWithData:;
- (id)initWithText:fontIndex:monogramColor:;
- (id)plateSelectedInactiveColor;
- (id)color;
- (id)plateSelectedActiveColor;
- (id)dataRepresentationWithVersion:;
- (void)appendToRecipe:text:;
- (void).cxx_destruct;
- (id)plateGradientStartColor;
- (id)plateSelectedActiveTextColor;
- (BOOL)_renderTextInContext:frame:;
- (void)setFontIndex:;
- (id)description;
- (void)setFontIndexToUnsupportedValue;
- (id)monogramColor;
- (id)snapshotWithSize:scale:options:;
- (id)text;
- (unsigned long long)fontIndex;
- (id)dataRepresentation;
+ (id)monogram;
+ (double)kerningForFontIndex:fontSize:;
+ (id)monogramWithData:;
+ (id)fontForIndex:plateDiameter:;
+ (id)_fontSpecs;
+ (void)updatePlateOverlayLayer:;
+ (unsigned long long)countOfFonts;
+ (id)plateOverlayLayer;
@end
