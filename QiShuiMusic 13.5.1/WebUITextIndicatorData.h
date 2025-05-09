@interface WebUITextIndicatorData : NSObject
@property (nonatomic) UIImage dataInteractionImage;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} selectionRectInRootViewCoordinates;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} textBoundingRectInRootViewCoordinates;
@property (nonatomic) NSArray textRectsInBoundingRectCoordinates;
@property (nonatomic) double contentImageScaleFactor;
@property (nonatomic) UIImage contentImageWithHighlight;
@property (nonatomic) UIImage contentImage;
@property (nonatomic) UIImage contentImageWithoutSelection;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} contentImageWithoutSelectionRectInRootViewCoordinates;
@property (nonatomic) UIColor estimatedBackgroundColor;
- (id)contentImage;
- (void)dealloc;
- (id)dataInteractionImage;
- (id)textRectsInBoundingRectCoordinates;
- (id)estimatedBackgroundColor;
- (id)textBoundingRectInRootViewCoordinates;
- (id)contentImageWithoutSelectionRectInRootViewCoordinates;
- (id)contentImageWithoutSelection;
- (id)initWithImage:scale:;
- (void)setContentImage:;
- (void)setDataInteractionImage:;
- (id)selectionRectInRootViewCoordinates;
- (void)setSelectionRectInRootViewCoordinates:;
- (void)setTextBoundingRectInRootViewCoordinates:;
- (void)setTextRectsInBoundingRectCoordinates:;
- (id)contentImageWithHighlight;
- (void)setContentImageWithHighlight:;
- (void)setContentImageWithoutSelection:;
- (void)setContentImageWithoutSelectionRectInRootViewCoordinates:;
- (void)setEstimatedBackgroundColor:;
- (double)contentImageScaleFactor;
- (void)setContentImageScaleFactor:;
- (id)initWithImage:textIndicatorData:scale:;
@end
