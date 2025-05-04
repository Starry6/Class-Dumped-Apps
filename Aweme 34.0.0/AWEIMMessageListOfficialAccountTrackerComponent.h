@interface AWEIMMessageListOfficialAccountTrackerComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)callCellDisplayWithViewModel:withOption:;
- (void)__trackOfficialMessageShow:;
- (BOOL)__isAtAllMessage:;
+ (BOOL)canCreateComponentWithContext:;
@end
