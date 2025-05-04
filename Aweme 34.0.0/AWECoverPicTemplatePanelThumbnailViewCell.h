@interface AWECoverPicTemplatePanelThumbnailViewCell : UICollectionViewCell
@property (nonatomic) UIImageView templateImageView;
@property (nonatomic) ACCPicTemplateModel template;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithTemplateModel:;
- (id)templateImageView;
- (void)setTemplateImageView:;
- (id)accessibilityLabel;
- (void)setIsSelected:;
- (id)initWithFrame:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setupUI;
- (void)setTemplate:;
- (id)template;
@end
