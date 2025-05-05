@interface CoreDAVGetTask : CoreDAVTask
@property (nonatomic) <CoreDAVTaskDelegate> delegate;
@property (nonatomic) @ appSpecificDataItemResult;
@property (nonatomic) BOOL forceNoCache;
- (id)requestBody;
- (unsigned long long)cachePolicy;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (id)copyDefaultParserForContentType:;
- (void).cxx_destruct;
- (id)description;
- (id)appSpecificDataItemResult;
- (void)setAppSpecificDataItemResult:;
- (BOOL)forceNoCache;
- (void)setForceNoCache:;
@end
