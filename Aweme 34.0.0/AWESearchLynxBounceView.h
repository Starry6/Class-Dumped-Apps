@interface AWESearchLynxBounceView : LynxUIView
@property (nonatomic) Q direction;
@property (nonatomic) float space;
@property (nonatomic) <AWESearchLynxBounceViewDelegate> delegate;
- (void)space:requestReset:;
- (void)direction:requestReset:;
- (id)init;
- (id)delegate;
- (unsigned long long)direction;
- (void).cxx_destruct;
- (void)setDelegate:;
- (float)space;
- (void)frameDidChange;
+ (id)__lynx_prop_config__401;
+ (id)__lynx_prop_config__240;
@end
