@interface AMSDialogButton : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) q style;
@property (nonatomic) NSString title;
- (void)setStyle:;
- (void)setHandler:;
- (void)setTitle:;
- (id)handler;
- (id)title;
- (void).cxx_destruct;
- (long long)style;
- (id)initWithTitle:style:handler:;
+ (id)buttonWithTitle:style:handler:;
+ (id)buttonWithTitle:handler:;
@end
