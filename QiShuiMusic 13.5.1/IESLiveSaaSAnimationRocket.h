@interface IESLiveSaaSAnimationRocket : IESLiveSaaSAnimation
@property (nonatomic) NSAttributedString title;
@property (nonatomic) NSArray backgroundUrlList;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) BOOL showArrowIndicator;
@property (nonatomic) NSArray flexSetting;
- (void)setFlexSetting:;
- (id)backgroundUrlList;
- (id)flexSetting;
- (void)setBackgroundUrlList:;
- (void)setShowArrowIndicator:;
- (BOOL)showArrowIndicator;
- (void)setWidth:;
- (void)setTitle:;
- (float)height;
- (float)width;
- (id)title;
- (void)setHeight:;
- (void).cxx_destruct;
@end
