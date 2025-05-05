@interface CEMClassroomStopMirroringCommand_Status : CEMPayloadBase
- (BOOL)loadPayload:error:;
- (id)serializePayload;
+ (id)build;
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildRequiredOnly;
@end
