@interface CoreDAVPropFindTask : CoreDAVPropertyFindBaseTask
@property (nonatomic) <CoreDAVTaskDelegate> delegate;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (id)initWithPropertiesToFind:atURL:withDepth:;
@end
