@interface MFMailMenuCommand : NSObject
@property (nonatomic) UICommand command;
@property (nonatomic) q menu;
- (long long)menu;
- (id)command;
- (void).cxx_destruct;
- (id)initWithCommand:menu:;
+ (id)shortcutWithCommand:menu:;
+ (id)shortcutWithInput:flags:repeatable:menu:action:;
+ (id)shortcutWithInput:flags:repeatable:menu:action:title:plist:;
@end
