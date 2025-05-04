@interface AWEAIImageExpandLoadingView : UIView
@property (nonatomic) ACCEditAIFakeProgressView fakeProgressView;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) @? cancelHandler;
- (void)startFakeProgress;
- (void)endFakeProgress;
- (id)fakeProgressView;
- (void)setFakeProgressView:;
- (void)setCancelButton:;
- (id)initWithFrame:;
- (void)setCancelHandler:;
- (BOOL)gestureRecognizerShouldBegin:;
- (id)cancelButton;
- (void).cxx_destruct;
- (void)setupUI;
- (id)cancelHandler;
- (void)cancelAction:;
@end
