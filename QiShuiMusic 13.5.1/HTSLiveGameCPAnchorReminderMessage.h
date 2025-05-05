@interface HTSLiveGameCPAnchorReminderMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString gameId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString gameName;
@property (nonatomic) NSString gameIconURL;
+ (id)descriptor;
@end
