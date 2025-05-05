@interface CNVCardPhoneLineGenerator : CNVCardLineGenerator
- (id)makeLineWithName:value:;
- (id)standardLabelsForLabel:;
+ (id)sanitizeNumber:;
@end
