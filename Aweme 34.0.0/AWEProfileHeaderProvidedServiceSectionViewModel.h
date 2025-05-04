@interface AWEProfileHeaderProvidedServiceSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) double sectionTopPadding;
@property (nonatomic) double additionalHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithContext:;
- (id)padService;
- (double)topPaddingWithUpperSection:;
- (double)bottomPaddingWithLowerSection:;
- (void)sectionUpdateAdditionalHeight:animated:;
- (void)sectionResetHeight;
- (id)init;
- (long long)sectionType;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (double)additionalHeight;
- (void)setAdditionalHeight:;
- (id)sectionSize;
- (double)footerHeight;
- (double)sectionTopPadding;
- (void)setSectionTopPadding:;
@end
