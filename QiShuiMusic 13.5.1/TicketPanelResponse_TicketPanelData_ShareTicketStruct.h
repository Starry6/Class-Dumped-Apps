@interface TicketPanelResponse_TicketPanelData_ShareTicketStruct : IESLivePBBaseMessage
@property (nonatomic) NSInteger hasShareTicket;
@property (nonatomic) HTSLiveUser fromUser;
@property (nonatomic) BOOL hasFromUser;
+ (id)descriptor;
@end
