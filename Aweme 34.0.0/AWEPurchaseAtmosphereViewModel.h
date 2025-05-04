@interface AWEPurchaseAtmosphereViewModel : NSObject
@property (nonatomic) Q atmosphereType;
@property (nonatomic) NSArray imageUrlList;
@property (nonatomic) q num;
@property (nonatomic) NSString text;
- (id)imageUrlList;
- (void)setImageUrlList:;
- (unsigned long long)atmosphereType;
- (void)setAtmosphereType:;
- (BOOL)useNum;
- (BOOL)updateViewModelIsValid:;
- (id)getGradientLayerColors;
- (id)getBorderLayerColors;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (long long)num;
- (void)setNum:;
@end
