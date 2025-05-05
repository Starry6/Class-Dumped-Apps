@interface INSendRideFeedbackIntentResponse : INIntentResponse
@property (nonatomic) q code;
- (id)_dictionaryRepresentation;
- (id)initWithBackingStore:;
- (long long)code;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_initWithCode:userActivity:;
- (id)initWithCode:userActivity:;
+ (BOOL)supportsSecureCoding;
@end
