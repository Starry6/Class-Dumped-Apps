@interface CJPayStyleLoadingConfig : JSONModel
@property (nonatomic) NSString dialogPreGif;
@property (nonatomic) NSString dialogRepeatGif;
@property (nonatomic) NSString dialogCompleteSuccessGif;
@property (nonatomic) NSString panelPreGif;
@property (nonatomic) NSString panelRepeatGif;
@property (nonatomic) NSString panelCompleteSuccessGif;
- (id)dialogRepeatGif;
- (void)setPanelPreGif:;
- (id)dialogCompleteSuccessGif;
- (id)dialogPreGif;
- (id)panelCompleteSuccessGif;
- (id)panelPreGif;
- (id)panelRepeatGif;
- (void)setDialogCompleteSuccessGif:;
- (void)setDialogPreGif:;
- (void)setDialogRepeatGif:;
- (void)setPanelCompleteSuccessGif:;
- (void)setPanelRepeatGif:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
