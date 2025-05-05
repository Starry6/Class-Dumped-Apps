@interface CoreDAVContainerInfoSyncTaskGroup : CoreDAVTaskGroup
@property (nonatomic) <CoreDAVContainerInfoSyncProvider> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didFinishWithError:;
- (void)startTaskGroup;
- (id)copyContainerParserMappings;
- (void)setDelegate:;
- (id)delegate;
- (Class)containerItemClass;
- (void).cxx_destruct;
- (id)description;
- (id)initWithContainerURL:previousSyncToken:accountInfoProvider:taskManager:;
@end
