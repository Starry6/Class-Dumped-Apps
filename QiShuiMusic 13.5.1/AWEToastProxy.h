@interface AWEToastProxy : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)show:onView:;
- (void)showError:onView:;
- (void)showSuccess:onView:;
- (void)show:;
- (void)showError:;
- (void)showSuccess:;
+ (void)setToastStyle:;
@end
