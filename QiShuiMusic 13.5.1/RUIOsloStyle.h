@interface RUIOsloStyle : RUIStyle
- (id)init;
- (id)_backgroundColor;
- (void)applyToLabel:;
- (long long)tableViewStyle;
- (void)applyToObjectModel:;
- (void)applyToNavigationBar:;
- (void)_applyToTitleLabel:;
@end
