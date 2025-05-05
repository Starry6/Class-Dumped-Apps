@interface ABSBundle : NSObject
@property (nonatomic) NSBundle backingBundle;
- (BOOL)respondsToSelector:;
- (id)init;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (Class)classNamed:;
- (id)initWithBackingBundle:;
- (id)backingBundle;
@end
