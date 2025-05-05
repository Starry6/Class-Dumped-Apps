@interface UIMenuItem : NSObject
@property (nonatomic) BOOL dontDismiss;
@property (nonatomic) NSString title;
@property (nonatomic) : action;
- (id)init;
- (SEL)action;
- (void)setTitle:;
- (void)setAction:;
- (id)title;
- (void).cxx_destruct;
- (BOOL)dontDismiss;
- (void)setDontDismiss:;
- (id)initWithTitle:action:;
@end
