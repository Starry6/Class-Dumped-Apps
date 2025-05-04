@interface AWEIMHalfScreenMuteFilterSettingsCellViewModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL shouldHidenLineView;
@property (nonatomic) q maskType;
@property (nonatomic) BOOL isChooseSwitch;
@property (nonatomic) q cellStyle;
- (BOOL)shouldHidenLineView;
- (void)setShouldHidenLineView:;
- (BOOL)isChooseSwitch;
- (void)setIsSelected:;
- (long long)cellStyle;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setCellStyle:;
- (long long)maskType;
- (void)setMaskType:;
@end
