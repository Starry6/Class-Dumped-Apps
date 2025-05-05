@interface CalDAVMkcalendarTask : CoreDAVTask
@property (nonatomic) NSSet setElements;
@property (nonatomic) <CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> delegate;
- (id)requestBody;
- (id)initWithURL:;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (id)copyDefaultParserForContentType:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPropertiesToSet:atURL:;
- (void)setSupportForEvents:tasks:;
- (id)setElements;
- (void)setSetElements:;
@end
