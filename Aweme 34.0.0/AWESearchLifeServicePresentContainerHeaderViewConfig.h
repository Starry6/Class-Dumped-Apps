@interface AWESearchLifeServicePresentContainerHeaderViewConfig : AWESearchPresentContainerHeaderViewConfig
@property (nonatomic) BOOL shouldShowCloseButton;
@property (nonatomic) BOOL shouldShowTopIndicator;
@property (nonatomic) double height;
- (BOOL)shouldShowTopIndicator;
- (void)setShouldShowTopIndicator:;
- (void)setHeight:;
- (double)height;
- (void)setShouldShowCloseButton:;
- (BOOL)shouldShowCloseButton;
@end
