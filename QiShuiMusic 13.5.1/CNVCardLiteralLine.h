@interface CNVCardLiteralLine : CNVCardLine
- (void).cxx_destruct;
- (void)serializeWithStrategy:;
- (id)initWithLiteralValue:;
+ (id)lineWithLiteralValue:;
@end
