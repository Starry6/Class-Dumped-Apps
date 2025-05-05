@interface IESSaaSTIMOConversationGroupManagementModel : IESSaaSTIMOModel
@property (nonatomic) NSString belongingConversationIdentifier;
@property (nonatomic) IESSaaSTIMOConversationFansGroupGreetingInfo greetingInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)belongingConversationIdentifier;
- (id)greetingInfo;
- (id)initWithConversationId:;
- (void)setBelongingConversationIdentifier:;
- (void)setGreetingInfo:;
- (void).cxx_destruct;
+ (id)cacheKeyWithCid:;
+ (id)groupManagementInfoDB;
+ (id)initWithStoreModel:;
+ (id)instanceWithIdentifier:;
@end
