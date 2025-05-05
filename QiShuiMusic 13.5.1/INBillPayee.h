@interface INBillPayee : NSObject
@property (nonatomic) INSpeakableString nickname;
@property (nonatomic) NSString accountNumber;
@property (nonatomic) INSpeakableString organizationName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_intents_readableTitleWithLocalizer:metadata:;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)nickname;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (id)organizationName;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)accountNumber;
- (id)initWithNickname:number:organizationName:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
