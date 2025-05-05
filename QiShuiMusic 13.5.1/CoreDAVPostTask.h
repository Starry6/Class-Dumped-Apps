@interface CoreDAVPostTask : CoreDAVPostOrPutTask
@property (nonatomic) <CoreDAVTaskDelegate> delegate;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (id)initWithDataPayload:dataContentType:atURL:previousETag:;
@end
