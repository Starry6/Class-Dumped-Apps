@interface AVHapticPlayerChannel : NSObject
@property (nonatomic) Q chanID;
@property (nonatomic) AVHapticClient client;
@property (nonatomic) Q eventBehavior;
- (unsigned long long)eventBehavior;
- (void)setClient:;
- (id)client;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithChannelID:client:;
- (void)setEventBehavior:;
- (BOOL)sendEvents:atTime:error:;
- (BOOL)sendEvents:withImmediateParameters:atTime:error:;
- (BOOL)clearEvents:error:;
- (BOOL)setParameter:value:atTime:error:;
- (BOOL)scheduleParameterCurve:curve:atTime:error:;
- (BOOL)resetAtTime:error:;
- (unsigned long long)chanID;
- (void)setChanID:;
@end
