@interface CATextLayer : CALayer
@property (nonatomic) @ truncationString;
@property (nonatomic) BOOL truncated;
@property (nonatomic) @ string;
@property (nonatomic) r^v font;
@property (nonatomic) double fontSize;
@property (nonatomic) ^{CGColor=} foregroundColor;
@property (nonatomic) BOOL wrapped;
@property (nonatomic) NSString truncationMode;
@property (nonatomic) NSString alignmentMode;
@property (nonatomic) BOOL allowsFontSubpixelQuantization;
- (void)mt_applyVisualStying:;
- (id)string;
- (BOOL)CA_validateValue:forKey:;
- (void)drawInContext:;
- (id)foregroundColor;
- (id)init;
- (void)setForegroundColor:;
- (void)dealloc;
- (id)truncationMode;
- (void)setString:;
- (void)setFont:;
- (id)implicitAnimationForKeyPath:;
- (id)_preferredSize;
- (void)didChangeValueForKey:;
- (BOOL)isWrapped;
- (BOOL)isTruncated;
- (void)setTruncationMode:;
- (double)fontSize;
- (id)font;
- (void)setFontSize:;
- (BOOL)wrapped;
- (id)_createStringDict;
- (id)_retainTypesetter;
- (id)_createTruncationToken;
- (void)_applyLinesToFunction:info:;
- (void)_applyLinesToFunction:info:truncated:;
- (void)_drawLine:inContext:atPoint:;
- (void)_prepareContext:;
- (void)setWrapped:;
- (id)alignmentMode;
- (void)setAlignmentMode:;
- (BOOL)allowsFontSubpixelQuantization;
- (void)setAllowsFontSubpixelQuantization:;
- (id)truncationString;
- (void)setTruncationString:;
+ (BOOL)needsDisplayForKey:;
+ (id)defaultValueForKey:;
+ (BOOL)CA_automaticallyNotifiesObservers:;
@end
