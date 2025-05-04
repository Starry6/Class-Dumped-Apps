@interface AWESearchFilterCollectionViewColorConfiguration : NSObject
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIColor bgColor;
@property (nonatomic) UIColor selectedTextColor;
@property (nonatomic) UIColor selectedBgColor;
@property (nonatomic) UIColor borderColor;
@property (nonatomic) UIColor selectedBorderColor;
@property (nonatomic) UIColor hintTextColor;
- (id)hintTextColor;
- (id)selectedBgColor;
- (id)selectedBorderColor;
- (void)setSelectedBorderColor:;
- (void)setSelectedBgColor:;
- (void)setHintTextColor:;
- (void)setBorderColor:;
- (id)borderColor;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (id)selectedTextColor;
- (void)setSelectedTextColor:;
- (id)bgColor;
- (void)setBgColor:;
@end
