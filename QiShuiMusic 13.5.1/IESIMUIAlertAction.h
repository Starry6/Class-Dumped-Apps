@interface IESIMUIAlertAction : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) q style;
@property (nonatomic) @? handler;
@property (nonatomic) BOOL showAlterViewAfterClicking;
- (void)setShowAlterViewAfterClicking:;
- (BOOL)showAlterViewAfterClicking;
- (void)setStyle:;
- (void)setHandler:;
- (void)setTitle:;
- (id)handler;
- (id)title;
- (void).cxx_destruct;
- (long long)style;
+ (id)actionWithTitle:style:handler:;
@end
