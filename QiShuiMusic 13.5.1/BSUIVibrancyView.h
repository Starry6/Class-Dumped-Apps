@interface BSUIVibrancyView : UIView
@property (nonatomic) BSUIVibrancyConfiguration configuration;
- (void)updateFilters;
- (void)_update;
- (void)invalidateSubviews;
- (void)layoutSubviews;
- (void)setConfiguration:;
- (id)initWithFrame:;
- (id)configuration;
- (void).cxx_destruct;
- (void)_invalidateFilters;
- (void)_updateFilterViewsIfNeeded;
+ (BOOL)isDisabled;
@end
