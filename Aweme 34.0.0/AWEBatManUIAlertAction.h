@interface AWEBatManUIAlertAction : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) q style;
@property (nonatomic) UIFont font;
@property (nonatomic) @? handler;
@property (nonatomic) BOOL showAlterViewAfterClicking;
- (BOOL)showAlterViewAfterClicking;
- (void)setShowAlterViewAfterClicking:;
- (void)setHandler:;
- (id)handler;
- (long long)style;
- (id)font;
- (void).cxx_destruct;
- (void)setFont:;
- (id)title;
- (void)setTitle:;
- (void)setStyle:;
+ (id)actionWithTitle:style:font:handler:;
+ (id)actionWithTitle:style:handler:;
@end
