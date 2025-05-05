@interface UITableViewRowAction : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) q style;
@property (nonatomic) NSString title;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIVisualEffect backgroundEffect;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (id)backgroundEffect;
- (void)setTitle:;
- (id)_handler;
- (id)title;
- (void).cxx_destruct;
- (id)_button;
- (long long)style;
- (void)setBackgroundEffect:;
- (id)copyWithZone:;
- (id)_initWithStyle:title:handler:;
- (void)_setButton:;
+ (id)rowActionWithStyle:title:handler:;
@end
