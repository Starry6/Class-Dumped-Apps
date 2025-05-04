@interface AWEIMGroupJoinResult : NSObject
@property (nonatomic) NSSet addedParticipants;
@property (nonatomic) <IESIMConversationOperationResponse> response;
@property (nonatomic) NSInteger status;
@property (nonatomic) q checkCode;
@property (nonatomic) NSString checkMessage;
@property (nonatomic) NSString extraInfo;
@property (nonatomic) NSError error;
- (long long)checkCode;
- (id)checkMessage;
- (id)initWithAddedParticipants:response:status:checkCode:checkMessage:extraInfo:error:;
- (id)response;
- (void).cxx_destruct;
- (id)error;
- (int)status;
- (id)addedParticipants;
- (id)extraInfo;
+ (id)resultWithAddedParticipants:response:status:checkCode:checkMessage:extraInfo:error:;
@end
