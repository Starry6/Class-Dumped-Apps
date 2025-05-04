@interface AWEVoipBaseOperation : NSObject
@property (nonatomic) q enterFrom;
@property (nonatomic) Q interactionAction;
@property (nonatomic) q initialActions;
- (void)setEnterFrom:;
- (long long)enterFrom;
- (unsigned long long)interactionAction;
- (void)setInteractionAction:;
- (long long)initialActions;
- (void)setInitialActions:;
- (long long)awe_voipInitialActions;
@end
