@interface BDAntiAddictionAuthTicketModel : NSObject
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSString ticket;
@property (nonatomic) NSString scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStatusMsg:;
- (id)statusMsg;
- (void)setStatusCode:;
- (id)statusCode;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)ticket;
- (void)setTicket:;
+ (id)modelCustomPropertyMapper;
@end
