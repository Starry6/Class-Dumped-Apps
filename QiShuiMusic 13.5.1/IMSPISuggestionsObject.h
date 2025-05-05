@interface IMSPISuggestionsObject : NSObject
@property (nonatomic) NSString chatGUID;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSArray participants;
- (id)participants;
- (id)displayName;
- (void).cxx_destruct;
- (id)description;
- (id)chatGUID;
- (id)initWithChatGuid:displayName:participants:;
@end
