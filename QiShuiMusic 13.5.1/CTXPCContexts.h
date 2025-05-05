@interface CTXPCContexts : NSObject
@property (nonatomic) NSArray subscriptions;
@property (nonatomic) NSUUID dataPreferred;
@property (nonatomic) NSUUID voicePreferred;
- (void)setSubscriptions:;
- (void)setVoicePreferred:;
- (id)subscriptions;
- (id)voicePreferred;
- (id)dataPreferred;
- (id)initWithCoder:;
- (id)findForAccount:;
- (void)encodeWithCoder:;
- (id)findForSlot:;
- (void).cxx_destruct;
- (id)findForUuid:;
- (id)description;
- (void)setDataPreferred:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
