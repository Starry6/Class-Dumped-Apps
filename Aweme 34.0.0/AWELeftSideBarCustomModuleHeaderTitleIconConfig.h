@interface AWELeftSideBarCustomModuleHeaderTitleIconConfig : NSObject
@property (nonatomic) AWELeftSideBarIconUrlArrayDataModel iconModel;
@property (nonatomic) @? clickBlock;
@property (nonatomic) NSString iconAccessibilityLabel;
@property (nonatomic) UIImage placeHoldImage;
- (void)setClickBlock:;
- (id)clickBlock;
- (id)placeHoldImage;
- (void)setPlaceHoldImage:;
- (void).cxx_destruct;
- (void)setIconModel:;
- (id)iconModel;
- (id)iconAccessibilityLabel;
- (void)setIconAccessibilityLabel:;
@end
