@interface CEMEventSubscriptionNowCommand_Status : CEMPayloadBase
@property (nonatomic) NSArray statusInactiveEvents;
@property (nonatomic) NSArray statusUnknownEvents;
- (void).cxx_destruct;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusInactiveEvents;
- (void)setStatusInactiveEvents:;
- (id)statusUnknownEvents;
- (void)setStatusUnknownEvents:;
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildRequiredOnly;
+ (id)buildWithInactiveEvents:withUnknownEvents:;
@end
