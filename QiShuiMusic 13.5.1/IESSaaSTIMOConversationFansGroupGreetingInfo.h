@interface IESSaaSTIMOConversationFansGroupGreetingInfo : IESSaaSTIMOModel
@property (nonatomic) NSString belongingConversationIdentifier;
@property (nonatomic) NSInteger greetingUpdateValue;
@property (nonatomic) NSString greetingMessages;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)belongingConversationIdentifier;
- (void)configWithGroupManagementInfo:;
- (id)greetingMessages;
- (int)greetingUpdateValue;
- (id)initWithConversationId:;
- (void)setBelongingConversationIdentifier:;
- (void)setGreetingMessages:;
- (void)setGreetingUpdateValue:;
- (void).cxx_destruct;
@end
