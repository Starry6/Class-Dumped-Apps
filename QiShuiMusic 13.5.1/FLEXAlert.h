@interface FLEXAlert : NSObject
@property (nonatomic) UIAlertController _controller;
@property (nonatomic) NSMutableArray _actions;
@property (nonatomic) @? title;
@property (nonatomic) @? message;
@property (nonatomic) @? button;
@property (nonatomic) @? textField;
@property (nonatomic) @? configuredTextField;
- (id)initWithController:;
- (id)title;
- (id)message;
- (id)button;
- (id)textField;
- (id)configuredTextField;
- (id)_controller;
- (id)_actions;
- (void).cxx_destruct;
+ (void)showAlert:message:from:;
+ (void)showQuickAlert:from:;
+ (id)make:withStyle:;
+ (void)make:withStyle:showFrom:source:;
+ (void)makeAlert:showFrom:;
+ (void)makeSheet:showFrom:;
+ (void)makeSheet:showFrom:source:;
+ (id)makeAlert:;
+ (id)makeSheet:;
@end
