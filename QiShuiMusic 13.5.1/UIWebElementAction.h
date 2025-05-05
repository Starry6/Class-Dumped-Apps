@interface UIWebElementAction : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) @? dismissalHandler;
- (id)_title;
- (void)dealloc;
- (id)dismissalHandler;
- (int)type;
- (void)setDismissalHandler:;
- (id)initWithTitle:actionHandler:type:;
- (void)_runActionWithElement:targetURL:documentView:interactionLocation:;
+ (id)customElementActionWithTitle:actionHandler:;
+ (id)standardElementActionWithType:customTitle:context:;
+ (id)standardElementActionWithType:;
@end
