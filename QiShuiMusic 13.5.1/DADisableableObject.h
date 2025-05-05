@interface DADisableableObject : NSObject
@property (nonatomic) BOOL isDisabled;
- (void)disable;
- (BOOL)isDisabled;
- (void)setIsDisabled:;
@end
