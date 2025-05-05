@interface PCKeepAliveState : NSObject
@property (nonatomic) C state;
@property (nonatomic) C subState;
- (void)setState:;
- (id)initWithKeepAliveState:subState:;
- (void)setSubState:;
- (unsigned char)state;
- (unsigned char)subState;
@end
