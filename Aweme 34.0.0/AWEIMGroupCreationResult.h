@interface AWEIMGroupCreationResult : NSObject
@property (nonatomic) NSString conversationIdentifier;
@property (nonatomic) <IESIMConversationOperationResponse> response;
@property (nonatomic) NSInteger status;
@property (nonatomic) q checkCode;
@property (nonatomic) NSString checkMessage;
@property (nonatomic) NSString extraInfo;
@property (nonatomic) NSError error;
- (long long)checkCode;
- (id)checkMessage;
- (id)initWithConversationIdentifier:response:status:checkCode:checkMessage:extraInfo:error:;
- (id)conversationIdentifier;
- (id)response;
- (void).cxx_destruct;
- (id)error;
- (int)status;
- (id)extraInfo;
+ (id)resultWithConversationIdentifier:response:status:checkCode:checkMessage:extraInfo:error:;
@end
