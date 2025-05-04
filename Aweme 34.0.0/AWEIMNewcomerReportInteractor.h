@interface AWEIMNewcomerReportInteractor : AWEIMComponentBase
@property (nonatomic) NSDictionary newcomerReportInfo;
@property (nonatomic) BOOL enableAddLocalMessage;
@property (nonatomic) BOOL didInsertLocalCard;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:source:;
- (id)vcParent;
- (void)didFetchMsgAndEnableAddLocalMsg;
- (BOOL)enableAddLocalMessage;
- (id)newcomerReportInfo;
- (BOOL)didInsertLocalCard;
- (void)setDidInsertLocalCard:;
- (void)setNewcomerReportInfo:;
- (void)__tryInserdNewcomerReportCardMessage;
- (void)setEnableAddLocalMessage:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
+ (BOOL)enableWithIESCon:;
@end
