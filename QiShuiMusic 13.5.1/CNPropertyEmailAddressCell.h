@interface CNPropertyEmailAddressCell : CNPropertySimpleTransportCell
@property (nonatomic) BOOL VIP;
- (BOOL)shouldPerformDefaultAction;
- (BOOL)shouldShowStar;
- (void)updateTransportButtons;
- (void)updateValueWithPropertyItem:;
- (void)setVIP:;
- (BOOL)isVIP;
@end
