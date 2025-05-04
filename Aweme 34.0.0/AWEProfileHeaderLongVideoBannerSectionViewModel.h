@interface AWEProfileHeaderLongVideoBannerSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) double footerHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithContext:;
- (id)padService;
- (double)topPaddingWithUpperSection:;
- (double)bottomPaddingWithLowerSection:;
- (id)init;
- (long long)sectionType;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)sectionSize;
- (double)footerHeight;
@end
