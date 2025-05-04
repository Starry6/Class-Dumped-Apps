@interface AWEUserPersonalSearchInfoHeader : UIView
@property (nonatomic) UILabel hintTextLabel;
@property (nonatomic) AWESearchRedirectGeneralSearchView redirectView;
@property (nonatomic) AWEUserPersonalSearchSectionHeader sectionHeader;
- (void)configureUI;
- (id)hintTextLabel;
- (void)setHintTextLabel:;
- (id)redirectView;
- (void)updateWithHintText:centered:;
- (void)setRedirectView:;
- (id)init;
- (void).cxx_destruct;
- (id)sectionHeader;
- (void)setSectionHeader:;
@end
