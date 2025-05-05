@interface IESSaaSTIMOTemplateMessageQuery : IESSaaSTIMOTemplateQuery
- (void)assertUnknown;
- (id)init;
+ (id)queryLocalMessagesOfTypes:afterMessage:inConversation:limit:;
+ (id)queryLocalMessagesOfTypes:beforeMessage:inConversation:limit:;
@end
