@interface CoreDAVMkcolTask : CoreDAVActionBackedTask
@property (nonatomic) NSSet propertiesToSet;
@property (nonatomic) <CoreDAVTaskDelegate> delegate;
@property (nonatomic) NSURL priorOrderedURL;
@property (nonatomic) NSInteger absoluteOrder;
- (id)requestBody;
- (id)initWithURL:;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (id)copyDefaultParserForContentType:;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)description;
- (int)absoluteOrder;
- (void)setAbsoluteOrder:;
- (void)setPriorOrderedURL:;
- (id)priorOrderedURL;
- (id)initWithPropertiesToSet:atURL:;
- (id)propertiesToSet;
- (void)setPropertiesToSet:;
@end
