@interface IESLiveSaaSAnimation : NSObject
@property (nonatomic) BOOL ready;
@property (nonatomic) NSNumber duration;
@property (nonatomic) @? onTapAction;
- (void)preRenderFinished:;
- (BOOL)ready;
- (id)init;
- (void)setDuration:;
- (id)onTapAction;
- (void).cxx_destruct;
- (void)setReady:;
- (id)duration;
- (void)setOnTapAction:;
- (void)onTap:;
@end
