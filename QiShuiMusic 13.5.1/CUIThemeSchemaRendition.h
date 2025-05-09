@interface CUIThemeSchemaRendition : CUIThemeRendition
@property (nonatomic) Q numberOfSlices;
@property (nonatomic) ^{CGRect={CGPoint=dd}{CGSize=dd}} sliceRects;
@property (nonatomic) CUIPSDGradient gradient;
- (id)stringForState:;
- (unsigned short)direction;
- (unsigned short)localization;
- (id)contentInsets;
- (void)dealloc;
- (unsigned short)appearance;
- (id)gradient;
- (unsigned short)identifier;
- (unsigned short)layer;
- (unsigned short)presentationState;
- (unsigned short)dimension1;
- (unsigned short)state;
- (unsigned short)previousValue;
- (id)description;
- (unsigned short)value;
- (double)scale;
- (unsigned short)keyScale;
- (unsigned short)size;
- (unsigned short)previousState;
- (id)slices;
- (unsigned long long)numberOfSlices;
- (id)sliceRects;
- (id)initWithCoreUIOptions:forKey:;
- (id)alignmentRectangle;
- (id)edgeInsets:;
- (id)coreUIOptions;
- (id)referenceImage;
- (id)defaultTemplateName;
- (long long)columnSlices;
- (long long)rowSlices;
- (id)renditionCoordinatesForPartFeatures:;
- (unsigned short)dimension2;
- (unsigned short)drawingLayer;
- (id)typeLocalizedString;
- (id)stateLocalizedString;
- (id)previousStateLocalizedString;
- (id)directionLocalizedString;
- (id)stringForValue:;
- (id)valueLocalizedString;
- (id)previousValueLocalizedString;
- (id)sizeLocalizedString;
- (id)presentationStateLocalizedString;
- (id)dimension1LocalizedString;
- (id)dimension2LocalizedString;
- (id)drawingLayerLocalizedString;
- (id)scaleLocalizedString;
@end
