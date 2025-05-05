@interface BUADServiceLog : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adServiceVersion;
- (id)cloneInstance:;
- (void)getLogFilePathsWith:toTimeInterval:callback:;
- (void)localLogClose;
- (void)localLogFlushAsync;
- (void)localLogFlushSync;
- (void)localLogOpenWithPath:namePrefix:maxSize:outDate:;
- (void)localLogSetLevel:;
- (void)localLogWithLevel:tag:content:;
- (void)writeLocalLogWithLevel:tag:content:;
@end
