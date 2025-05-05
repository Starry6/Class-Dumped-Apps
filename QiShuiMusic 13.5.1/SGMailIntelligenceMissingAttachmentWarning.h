@interface SGMailIntelligenceMissingAttachmentWarning : SGMailIntelligenceComposeWarning
- (id)initWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (unsigned char)warningType;
+ (BOOL)supportsSecureCoding;
@end
