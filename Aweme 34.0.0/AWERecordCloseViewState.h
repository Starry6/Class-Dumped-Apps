@interface AWERecordCloseViewState : NSObject
@property (nonatomic) Q style;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hidden;
@property (nonatomic) Q alertStype;
@property (nonatomic) Q alertActionSet;
@property (nonatomic) NSString closeWarningTitle;
@property (nonatomic) BOOL inspirationPath;
- (id)initWithState:enable:hidden:;
- (void)setInspirationPath:;
- (void)setAlertStype:;
- (void)setAlertActionSet:;
- (unsigned long long)alertActionSet;
- (void)setCloseWarningTitle:;
- (id)closeWarningTitle;
- (BOOL)inspirationPath;
- (unsigned long long)alertStype;
- (BOOL)enable;
- (unsigned long long)style;
- (void)setHidden:;
- (void).cxx_destruct;
- (BOOL)hidden;
- (void)setEnable:;
- (void)setStyle:;
@end
