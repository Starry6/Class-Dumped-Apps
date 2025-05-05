@interface SGMailIntelligenceMissingRecipientWarning : SGMailIntelligenceComposeWarning
@property (nonatomic) NSString handle;
@property (nonatomic) NSString matchFoundInBCC;
- (id)handle;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (unsigned char)warningType;
- (id)initWithSnippet:core:signature:detectedLanguage:isIncomingMessage:score:matchFoundInBCC:;
- (id)initWithSnippet:core:score:matchFoundInBCC:;
- (id)initWithSnippet:core:handle:signature:detectedLanguage:isIncomingMessage:score:matchFoundInBCC:;
- (id)matchFoundInBCC;
+ (BOOL)supportsSecureCoding;
@end
