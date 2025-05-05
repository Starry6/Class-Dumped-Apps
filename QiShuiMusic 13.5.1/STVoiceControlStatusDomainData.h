@interface STVoiceControlStatusDomainData : NSObject
@property (nonatomic) BOOL voiceControlActive;
@property (nonatomic) Q listeningState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)dataByApplyingDiff:;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)diffFromData:;
- (void)encodeWithCoder:;
- (id)succinctDescription;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
- (unsigned long long)listeningState;
- (BOOL)isVoiceControlActive;
+ (BOOL)supportsSecureCoding;
@end
