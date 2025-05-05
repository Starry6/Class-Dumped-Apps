@interface CJPayToast : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)toastText:code:duration:inWindow:;
- (void)toastText:code:inWindow:;
- (void)toastText:duration:inWindow:;
- (void)toastText:inWindow:;
- (void)toastText:inWindow:location:;
+ (id)sharedToast;
+ (void)toastImage:title:duration:inWindow:;
@end
