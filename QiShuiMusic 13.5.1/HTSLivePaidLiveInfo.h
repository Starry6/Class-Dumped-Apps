@interface HTSLivePaidLiveInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger paidType;
@property (nonatomic) NSInteger viewRight;
@property (nonatomic) q duration;
@property (nonatomic) HTSLiveTicketData ticketSession;
@property (nonatomic) BOOL hasTicketSession;
@property (nonatomic) NSInteger delivery;
+ (id)descriptor;
@end
