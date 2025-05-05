@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup
@property (nonatomic) NSURL cardURL;
@property (nonatomic) NSURL homeURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startTaskGroup;
- (id)homeURL;
- (void).cxx_destruct;
- (id)description;
- (id)cardURL;
- (void)propPatchTask:parsedResponses:error:;
- (id)initWithAccountInfoProvider:taskManager:homeURL:cardURL:;
- (id)_newPropPatchTask;
@end
