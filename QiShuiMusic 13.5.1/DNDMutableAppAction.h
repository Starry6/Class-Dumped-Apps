@interface DNDMutableAppAction : DNDAppAction
@property (nonatomic) LNAction action;
@property (nonatomic) BOOL enabled;
- (void)setAction:;
- (void)setEnabled:;
@end
