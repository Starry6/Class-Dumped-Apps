@interface CEMApplicationListInstalledApplicationsCommand_Status : CEMPayloadBase
@property (nonatomic) NSArray statusInstalledApplicationList;
- (void).cxx_destruct;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusInstalledApplicationList;
- (void)setStatusInstalledApplicationList:;
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithInstalledApplicationList:;
+ (id)buildRequiredOnlyWithInstalledApplicationList:;
@end
