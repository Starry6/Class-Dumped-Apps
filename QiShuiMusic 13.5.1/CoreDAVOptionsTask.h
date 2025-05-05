@interface CoreDAVOptionsTask : CoreDAVTask
@property (nonatomic) <CoreDAVOptionsTaskDelegate> delegate;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
@end
