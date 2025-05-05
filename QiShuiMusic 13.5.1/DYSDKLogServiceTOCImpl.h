@interface DYSDKLogServiceTOCImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)dysdk_bootstrapLoad;
+ (void)enableLogService;
+ (void)logWithLevel:tag:fileName:funcName:line:content:;
@end
