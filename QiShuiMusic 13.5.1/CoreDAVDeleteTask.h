@interface CoreDAVDeleteTask : CoreDAVActionBackedTask
@property (nonatomic) <CoreDAVTaskDelegate> delegate;
@property (nonatomic) NSString previousETag;
- (id)requestBody;
- (id)httpMethod;
- (void)setPreviousETag:;
- (void)finishCoreDAVTaskWithError:;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)description;
- (id)previousETag;
@end
