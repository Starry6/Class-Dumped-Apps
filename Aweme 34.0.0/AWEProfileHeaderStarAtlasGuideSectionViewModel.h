@interface AWEProfileHeaderStarAtlasGuideSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) BOOL isStarAtlasTracked;
@property (nonatomic) double footerHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithContext:;
- (id)padService;
- (double)topPaddingWithUpperSection:;
- (double)bottomPaddingWithLowerSection:;
- (void)trackForStarAtlasGuide;
- (void)resetStarAtlasTracked;
- (void)trackEnterAtlasGuide;
- (BOOL)isStarAtlasTracked;
- (void)setIsStarAtlasTracked:;
- (id)init;
- (long long)sectionType;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)sectionSize;
- (double)footerHeight;
@end
