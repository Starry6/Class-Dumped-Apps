@interface CHTextInputGesture : NSObject
@property (nonatomic) CHTokenizedTextResult _textResult;
@property (nonatomic) {_NSRange=QQ} _storedAffectedRange;
@property (nonatomic) q gestureType;
@property (nonatomic) CHTextInputTargetContentInfo targetContentInfo;
@property (nonatomic) NSLocale locale;
@property (nonatomic) CHDrawing normalizedDrawing;
@property (nonatomic) CHDrawing originalDrawing;
@property (nonatomic) BOOL preferCharacterLevel;
@property (nonatomic) <CHStroke> lastStroke;
- (id)locale;
- (void).cxx_destruct;
- (long long)gestureType;
- (void)setGestureType:;
- (id)textResult;
- (id)_textResult;
- (id)initWithGestureType:targetContentInfo:locale:normalizedDrawing:originalDrawing:lastStroke:preferCharacterLevel:;
- (void)getAffectedRange:expandedToFullTokens:;
- (id)_affectedRangeByTrimmingSpaces:;
- (id)_affectedRangeByRemovingTerminatingNewLines:;
- (id)_affectedRangeByAdjustingForProtectedCharacters:;
- (id)_affectedRangeByAdjustingToTokensIfNeeded:allowSubtoken:didExpand:;
- (id)targetContentInfo;
- (id)normalizedDrawing;
- (id)originalDrawing;
- (BOOL)preferCharacterLevel;
- (id)lastStroke;
- (void)set_textResult:;
- (id)_storedAffectedRange;
- (void)set_storedAffectedRange:;
+ (BOOL)_isShapeBasedRangeRefinementSupportedForResultType:;
+ (id)_affectedRangeByRefiningShapeBasedGesture:resultType:drawing:targetContentInfo:;
+ (void)_shouldExpandToFullTokensForScriptInString:withRange:shouldExpandStart:shouldExpandEnd:;
+ (id)rangeOfTokenAtCharacterIndex:inString:locale:;
+ (long long)_cursorPositionForPoint:referenceString:referenceCharRects:searchingRange:;
+ (id)verticalBarGestureFromLineResult:currentGesture:;
+ (BOOL)isEditGestureForDrawing:targetContentInfo:tentativeResultType:;
+ (BOOL)shouldReclassifyGestureType:;
+ (BOOL)isVerticalBarShapeFromLineResult:originalDrawing:isDirectionDownward:;
+ (BOOL)isDrawingCenterOnBlank:targetContentInfo:insertionLocation:;
@end
