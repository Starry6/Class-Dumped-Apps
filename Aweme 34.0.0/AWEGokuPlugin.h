@interface AWEGokuPlugin : NSObject
@property (nonatomic) <AWEGokuPluginTargetProtocol> target;
- (BOOL)isRespondsTo:;
- (id)target;
- (void)setTarget:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (id)initWithTarget:;
@end
