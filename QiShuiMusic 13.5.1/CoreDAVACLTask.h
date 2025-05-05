@interface CoreDAVACLTask : CoreDAVTask
@property (nonatomic) NSArray accessControlEntities;
@property (nonatomic) <CoreDAVACLTaskDelegate> delegate;
- (id)requestBody;
- (id)initWithURL:;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (void).cxx_destruct;
- (id)description;
- (id)accessControlEntities;
- (void)setAccessControlEntities:;
- (id)initWithAccessControlEntities:atURL:;
@end
