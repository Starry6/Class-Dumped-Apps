@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup
@property (nonatomic) NSInteger containerInfoDepth;
@property (nonatomic) <CoreDAVContainerInfoTaskGroupDelegate> delegate;
@property (nonatomic) NSSet containerURLs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)propFindTask:parsedResponses:error:;
- (void)taskGroupWillCancelWithError:;
- (void)startTaskGroup;
- (int)containerInfoDepthForURL:;
- (void).cxx_destruct;
- (id)description;
- (id)_copyContainerWithURL:andProperties:;
- (id)_copyContainerParserMappings;
- (id)initWithAccountInfoProvider:containerURLs:taskManager:;
- (void)_getContainerHomeSet;
- (void)_getContainerTopLevelInfo;
- (int)containerInfoDepth;
- (void)setContainerInfoDepth:;
- (id)containerURLs;
@end
