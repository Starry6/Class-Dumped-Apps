@interface IESLiveActionSheetItem : IESLiveDynamicModel
@property (nonatomic) NSString title;
@property (nonatomic) @? handler;
@property (nonatomic) BOOL disabled;
@property (nonatomic) @? onDisplay;
@property (nonatomic) @? onStartPrepareAsyncDisplay;
@property (nonatomic) BOOL dismissBlocked;
- (BOOL)dismissBlocked;
- (id)onDisplay;
- (id)onStartPrepareAsyncDisplay;
- (void)setDismissBlocked:;
- (void)setOnDisplay:;
- (void)setOnStartPrepareAsyncDisplay:;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
+ (id)itemWithTitle:handler:;
@end
