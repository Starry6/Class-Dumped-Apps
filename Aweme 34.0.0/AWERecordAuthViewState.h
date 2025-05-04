@interface AWERecordAuthViewState : NSObject
@property (nonatomic) NSString customTitle;
@property (nonatomic) NSString customMessage;
@property (nonatomic) ACCRecordAuthStatus authStatus;
@property (nonatomic) BOOL mustHaveMicScene;
@property (nonatomic) BOOL showDYCode;
@property (nonatomic) BOOL needBlur;
- (BOOL)needBlur;
- (void)setNeedBlur:;
- (void)setShowDYCode:;
- (void)setMustHaveMicScene:;
- (BOOL)mustHaveMicScene;
- (BOOL)showDYCode;
- (void).cxx_destruct;
- (id)customMessage;
- (void)setCustomTitle:;
- (id)customTitle;
- (void)setCustomMessage:;
- (id)authStatus;
- (void)setAuthStatus:;
@end
