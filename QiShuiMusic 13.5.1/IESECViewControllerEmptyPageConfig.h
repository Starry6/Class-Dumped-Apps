@interface IESECViewControllerEmptyPageConfig : NSObject
@property (nonatomic) NSString titleText;
@property (nonatomic) NSString informativeText;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) NSString primaryButtonTitle;
@property (nonatomic) q style;
@property (nonatomic) @? customImageViewGenerator;
- (id)customImageViewGenerator;
- (id)iesec_emptyPageConfigForState:;
- (id)iesec_emptyPageEdgeInsets;
- (void)setCustomImageViewGenerator:;
- (id)informativeText;
- (void)setInformativeText:;
- (void)setTitleText:;
- (id)titleText;
- (void)setStyle:;
- (void)setIconImage:;
- (void).cxx_destruct;
- (id)iconImage;
- (long long)style;
- (id)primaryButtonTitle;
- (void)setPrimaryButtonTitle:;
@end
