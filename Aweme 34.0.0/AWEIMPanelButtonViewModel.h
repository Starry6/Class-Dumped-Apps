@interface AWEIMPanelButtonViewModel : AWEIMPanelViewModel
@property (nonatomic) NSString primaryTitle;
@property (nonatomic) NSString secondaryTitle;
@property (nonatomic) @? primaryAction;
@property (nonatomic) @? secondaryAction;
- (id)init;
- (void)setPrimaryAction:;
- (id)primaryAction;
- (id)secondaryTitle;
- (void).cxx_destruct;
- (void)setPrimaryTitle:;
- (id)secondaryAction;
- (void)setSecondaryAction:;
- (void)setSecondaryTitle:;
- (id)primaryTitle;
+ (id)defaultViewModel;
@end
