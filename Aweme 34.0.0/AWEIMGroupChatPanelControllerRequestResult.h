@interface AWEIMGroupChatPanelControllerRequestResult : NSObject
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL succeed;
@property (nonatomic) NSError error;
@property (nonatomic) BOOL newCreated;
@property (nonatomic) NSString convID;
@property (nonatomic) NSString convName;
@property (nonatomic) NSArray addedParticipants;
- (id)convName;
- (void)updateCreateGroupInfoWithNewCreated:convID:convName:;
- (BOOL)isSucceed;
- (id)convID;
- (void)updateJoinGroupInfoWithAddedParticipants:;
- (id)initWithCancelled:succeed:error:;
- (BOOL)isNewCreated;
- (BOOL)isCancelled;
- (void).cxx_destruct;
- (id)error;
- (id)addedParticipants;
+ (id)resultWithCancelled:succeed:error:;
@end
