@interface RUISetupAssistantStyle : RUIStyle
- (id)init;
- (id)_backgroundColor;
- (void)applyToLabel:;
- (void)applyToObjectModel:;
- (void)applyToNavigationBar:;
- (void)_applyToTitleLabel:;
- (id)barBackgroundImageForUserInterfaceStyle:;
- (void)_applyToFooter:view:;
- (id)insetGroupedCellBackgroundColor;
@end
