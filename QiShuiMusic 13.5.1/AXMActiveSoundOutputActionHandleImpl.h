@interface AXMActiveSoundOutputActionHandleImpl : NSObject
@property (nonatomic) AXMActiveSound activeSound;
@property (nonatomic) AXMSoundComponent soundComponent;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRate:;
- (void)setPitch:;
- (id)init;
- (float)rate;
- (float)pitch;
- (void)stop;
- (void).cxx_destruct;
- (void)setQuantizedRate:;
- (id)activeSound;
- (void)setActiveSound:;
- (id)soundComponent;
- (void)setSoundComponent:;
@end
