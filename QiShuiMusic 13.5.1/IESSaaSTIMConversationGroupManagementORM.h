@interface IESSaaSTIMConversationGroupManagementORM : IESSaaSTIMBaseORM
@property (nonatomic) NSString belongingConversationIdentifier;
@property (nonatomic) NSInteger greetingUpdateValue;
@property (nonatomic) NSString greetingMessages;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)belongingConversationIdentifier;
- (id)greetingMessages;
- (int)greetingUpdateValue;
- (void)setBelongingConversationIdentifier:;
- (void)setGreetingMessages:;
- (void)setGreetingUpdateValue:;
- (void).cxx_destruct;
+ (id)belongingConversationIdentifier;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)greetingMessages;
+ (id)greetingUpdateValue;
+ (id)objectRelationalMappingForWCDB;
@end
