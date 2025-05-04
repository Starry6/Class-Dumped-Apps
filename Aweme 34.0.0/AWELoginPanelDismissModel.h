@interface AWELoginPanelDismissModel : NSObject
@property (nonatomic) q navigationBarClickAction;
@property (nonatomic) BOOL positiveConsumed;
@property (nonatomic) q dismissType;
- (void)setDismissType:;
- (long long)navigationBarClickAction;
- (void)setNavigationBarClickAction:;
- (BOOL)positiveConsumed;
- (void)setPositiveConsumed:;
- (long long)dismissType;
@end
