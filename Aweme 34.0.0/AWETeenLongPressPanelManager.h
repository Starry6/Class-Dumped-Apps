@interface AWETeenLongPressPanelManager : NSObject
@property (nonatomic) BOOL isPanelShowing;
- (BOOL)isPanelShowing;
- (void)setIsPanelShowing:;
+ (BOOL)isNewStyleLongPressPanelEnable;
+ (id)sharedManager;
@end
