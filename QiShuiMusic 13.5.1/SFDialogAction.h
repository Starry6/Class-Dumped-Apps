@interface SFDialogAction : NSObject
@property (nonatomic) q activatingKeyboardShortcut;
@property (nonatomic) q actionType;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL hasCustomAction;
@property (nonatomic) BOOL isPreferredAction;
- (long long)actionType;
- (id)title;
- (void).cxx_destruct;
- (void)triggerCustomAction;
- (id)initWithTitle:activatingKeyboardShortcut:type:isPreferredAction:;
- (BOOL)hasCustomAction;
- (void)setCustomAction:;
- (long long)activatingKeyboardShortcut;
- (BOOL)isPreferredAction;
+ (id)actionWithTitle:activatingKeyboardShortcut:type:;
+ (id)actionWithTitle:activatingKeyboardShortcut:type:isPreferredAction:;
@end
