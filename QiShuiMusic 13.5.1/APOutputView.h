@interface APOutputView : UIView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)avViewDidBecomeActive;
- (void)avViewDidEnterBackground:;
- (id)getFrame;
- (void)onFrame:;
- (void)setLifeCallback:;
- (int)startWithRender:;
- (void)dealloc;
- (void)stop;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
