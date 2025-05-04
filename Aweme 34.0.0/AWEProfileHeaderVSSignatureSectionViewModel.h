@interface AWEProfileHeaderVSSignatureSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithContext:;
- (id)padService;
- (double)topPaddingWithUpperSection:;
- (double)bottomPaddingWithLowerSection:;
- (long long)sectionType;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)sectionSize;
@end
