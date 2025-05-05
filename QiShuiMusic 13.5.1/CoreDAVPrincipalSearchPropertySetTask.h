@interface CoreDAVPrincipalSearchPropertySetTask : CoreDAVTask
@property (nonatomic) <CoreDAVPrincipalSearchPropertySetTaskDelegate> delegate;
- (id)requestBody;
- (id)initWithURL:;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (id)copyDefaultParserForContentType:;
@end
