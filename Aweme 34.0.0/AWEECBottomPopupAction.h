@interface AWEECBottomPopupAction : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) q style;
@property (nonatomic) @? handler;
@property (nonatomic) BOOL showAfterClicked;
- (void)setShowAfterClicked:;
- (BOOL)showAfterClicked;
- (void)setHandler:;
- (id)handler;
- (long long)style;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setStyle:;
+ (id)actionWithTitle:style:handler:;
@end
