@interface IMDCoreSpotlightChatParticipant : NSObject
@property (nonatomic) NSString handleID;
@property (nonatomic) CNContact contact;
@property (nonatomic) BOOL isSender;
- (id)contact;
- (void).cxx_destruct;
- (id)handleID;
- (BOOL)isSender;
- (id)initWithHandleID:contact:isSender:;
@end
