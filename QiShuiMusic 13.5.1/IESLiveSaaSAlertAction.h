@interface IESLiveSaaSAlertAction : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) NSString title;
@property (nonatomic) NSAttributedString attributedTitle;
@property (nonatomic) UIFont actionFont;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL emphasize;
- (id)actionFont;
- (BOOL)emphasize;
- (id)initWithTitle:attributedTitle:handler:;
- (void)setActionFont:;
- (void)setEmphasize:;
- (id)attributedTitle;
- (void)setHandler:;
- (void)setTitle:;
- (id)handler;
- (id)title;
- (void)setEnabled:;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)fire;
+ (id)actionWithAttributedTitle:handler:;
+ (id)emphasizeActionWithTitle:handler:;
+ (id)actionWithTitle:handler:;
@end
