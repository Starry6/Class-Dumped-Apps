@interface IESLiveControllerVisibleModel : NSObject
@property (nonatomic) UIViewController controller;
@property (nonatomic) BOOL fullScreen;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} visibleRect;
- (void)setVisibleRect:;
- (id)visibleRect;
- (void)setFullScreen:;
- (void)setController:;
- (void).cxx_destruct;
- (id)description;
- (id)controller;
- (BOOL)fullScreen;
@end
