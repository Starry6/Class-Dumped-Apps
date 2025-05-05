@interface PNSLogUploaderImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportALogWithFetchStartTime:fetchEndTime:scene:reportALogCallback:;
- (void)reportALogWithStartTime:endTime:;
@end
