@interface TicketPanelResponse : IESLivePBBaseMessage
@property (nonatomic) TicketPanelResponse_TicketPanelData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
