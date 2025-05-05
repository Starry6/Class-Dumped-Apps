@interface IESLiveRoomMessageStrategy : IESLiveMessageNodeStrategy
- (void)addNodeActionWithServerNode:;
- (BOOL)doFilterEcomFansClubMessage:;
- (BOOL)doFilterEcomLiveReplaySaveRoomMsg:;
- (BOOL)doFilterEcomOrderMessage:;
- (BOOL)doFilterForMessageList:;
- (BOOL)doFilterMinorRefundMessage:;
- (BOOL)doFilterOpenPlatformAudienceStartMessage:;
- (void)jointAttributedString:withMessage:;
- (id)localContentColor;
- (id)localNameColor;
- (BOOL)needFoldForMessage:;
- (void)updateNodeOnCreated:;
- (id)config;
@end
