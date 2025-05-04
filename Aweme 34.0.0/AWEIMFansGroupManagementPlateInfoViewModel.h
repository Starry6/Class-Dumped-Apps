@interface AWEIMFansGroupManagementPlateInfoViewModel : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString plateHeaderViewTitle;
@property (nonatomic) NSString plateHeaderButtonTitle;
@property (nonatomic) NSString plateHeaderImageName;
@property (nonatomic) BOOL hasDotView;
@property (nonatomic) NSString plateFooterButtonTitle;
- (void)updateHeaderRightButtonWithModel:;
- (double)viewFooterHeight;
- (id)plateHeaderViewTitle;
- (id)plateHeaderButtonTitle;
- (id)plateHeaderImageName;
- (BOOL)hasDotView;
- (id)plateFooterButtonTitle;
- (void)setPlateHeaderViewTitle:;
- (void)setPlateFooterButtonTitle:;
- (void)setPlateHeaderImageName:;
- (void)setPlateHeaderButtonTitle:;
- (void)setHasDotView:;
- (id)initWithModel:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (double)viewHeaderHeight;
@end
