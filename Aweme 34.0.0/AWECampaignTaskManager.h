@interface AWECampaignTaskManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)transferSchemaToDict:;
- (id)realCampaignTaskSchemaForRedirect:;
- (BOOL)createTaskForTaskType:withToken:extra:;
- (void)trackLogWithKey:message:;
- (id)aAWELiteActivityWatchVideoTaskAdapterDOUYINLiteAdapter;
- (void)createNewWatchTaskForJSON:withExtraStr:schema:;
- (id)init;
- (void)dealloc;
+ (Class)aAWELiteActivityWatchVideoTaskAdapterDOUYINLiteAdapterClass;
@end
