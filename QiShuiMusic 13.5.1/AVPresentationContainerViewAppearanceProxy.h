@interface AVPresentationContainerViewAppearanceProxy : NSObject
@property (nonatomic) UIView actualView;
@property (nonatomic) NSString cornerCurve;
@property (nonatomic) Q maskedCorners;
@property (nonatomic) double cornerRadius;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) BOOL clipsToBounds;
- (BOOL)clipsToBounds;
- (id)cornerCurve;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (void)setClipsToBounds:;
- (void)setMaskedCorners:;
- (void)setCornerRadius:;
- (void).cxx_destruct;
- (void)setCornerCurve:;
- (unsigned long long)maskedCorners;
- (double)cornerRadius;
- (void)setActualView:;
- (id)actualView;
@end
