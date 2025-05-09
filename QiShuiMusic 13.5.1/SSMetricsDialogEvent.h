@interface SSMetricsDialogEvent : SSMetricsBaseEvent
@property (nonatomic) NSString actionType;
@property (nonatomic) NSString actionURL;
@property (nonatomic) NSDictionary details;
@property (nonatomic) NSString dialogId;
@property (nonatomic) NSString dialogType;
@property (nonatomic) NSString dualAction;
@property (nonatomic) NSString message;
@property (nonatomic) NSString result;
@property (nonatomic) NSString targetId;
@property (nonatomic) NSArray userActions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)actionURL;
- (id)initWithXPCEncoding:;
- (id)result;
- (void)setDetails:;
- (id)init;
- (id)copyXPCEncoding;
- (id)actionType;
- (void)setMessage:;
- (void)setActionType:;
- (void)setActionURL:;
- (id)dialogId;
- (id)message;
- (id)details;
- (void)setDialogId:;
- (void)setTargetId:;
- (id)targetId;
- (void)setResult:;
- (void)setDualAction:;
- (id)dualAction;
- (id)userActions;
- (void)setUserActions:;
- (id)dialogType;
- (void)setDialogType:;
@end
