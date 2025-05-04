@interface AWEInteractionReusableMsgModel : NSObject
@property (nonatomic) I flags;
@property (nonatomic) Q state;
- (void)interactionSateDidChange:;
- (void)setFlags:;
- (unsigned long long)state;
- (unsigned int)flags;
- (void)setState:;
@end
