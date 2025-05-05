@interface VEEffectMessageReceiverRef : NSObject
@property (nonatomic) <VEEffectMessageReceiver> receiver;
- (id)receiver;
- (void).cxx_destruct;
- (void)setReceiver:;
+ (id)refWithReceiver:;
@end
