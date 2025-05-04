@interface AWEHPTopTabItemTextColorModel : NSObject
@property (nonatomic) UIColor selectedLightColor;
@property (nonatomic) UIColor unSelectedLightColor;
@property (nonatomic) UIColor selectedDarkColor;
@property (nonatomic) UIColor unSelectedDarkColor;
- (void)setSelectedDarkColor:;
- (void)setSelectedLightColor:;
- (void)setUnSelectedDarkColor:;
- (void)setUnSelectedLightColor:;
- (id)selectedDarkColor;
- (id)unSelectedDarkColor;
- (id)selectedLightColor;
- (id)unSelectedLightColor;
- (void).cxx_destruct;
@end
