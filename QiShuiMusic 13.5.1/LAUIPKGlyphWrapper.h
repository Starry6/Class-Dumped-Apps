@interface LAUIPKGlyphWrapper : NSObject
@property (nonatomic) UIView<GlyphMethods> glyphView;
@property (nonatomic) UIView<GlyphMethods> idleTouchID;
@property (nonatomic) NSObject<OS_dispatch_queue> glyphQueue;
@property (nonatomic) UIView view;
@property (nonatomic) BOOL fastAnimations;
@property (nonatomic) BOOL grayedOut;
@property (nonatomic) BOOL hidden;
- (BOOL)hidden;
- (id)view;
- (void).cxx_destruct;
- (void)setHidden:;
- (id)glyphView;
- (void)setFastAnimations:;
- (BOOL)fastAnimations;
- (id)initWithGlyphView:;
- (double)_minimumAnimationDurationForState:;
- (void)setState:idleTouchID:animated:completionHandler:;
- (void)setGrayedOut:;
- (BOOL)grayedOut;
- (id)idleTouchID;
- (id)glyphQueue;
+ (id)glyphWithStyle:frame:;
+ (id)_loadPKUI;
+ (Class)_loadClassFromString:;
@end
