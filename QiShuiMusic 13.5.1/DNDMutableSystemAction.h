@interface DNDMutableSystemAction : DNDSystemAction
@property (nonatomic) WFToggleSettingContextualAction action;
@property (nonatomic) WFReverseContextualAction reverseAction;
@property (nonatomic) BOOL enabled;
- (void)setAction:;
- (void)setEnabled:;
- (id)copyWithZone:;
- (void)setReverseAction:;
@end
