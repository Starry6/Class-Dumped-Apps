@interface CNVCardInstantMessagingLineGenerator : CNVCardLineGenerator
- (id)lineWithValue:label:;
- (id)makeLineWithName:value:;
- (id)standardLabelsForLabel:;
+ (id)serviceTypeStringForInstantMessageService:;
+ (id)instantMessageUsernameWithSchemeForUsername:service:;
@end
