@interface AFAnalyticsTurnBasedInstrumentationContext : NSObject
@property (nonatomic) NSUUID turnIdentifier;
- (id)init;
- (id)initWithCoder:;
- (id)turnIdentifier;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)emitInstrumentation:;
- (id)initWithTurnIdentifier:;
- (void)emitInstrumentation:machAbsoluteTime:;
- (id)nextTurnBasedContext;
- (id)nextTurnBasedContextForAnalytics:;
+ (BOOL)supportsSecureCoding;
+ (id)newTurnBasedContextWithPreviousTurnID:;
+ (id)newTurnBasedContextWithPreviousTurnID:analytics:;
@end
