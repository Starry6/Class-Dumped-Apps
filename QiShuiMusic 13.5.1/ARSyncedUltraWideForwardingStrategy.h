@interface ARSyncedUltraWideForwardingStrategy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)description;
- (BOOL)shouldProcessData:;
- (BOOL)shouldRequestResultDataAtTimestamp:context:;
- (id)initWithMaxFrameRate:;
+ (BOOL)frameRateLimitAllowsProcessingThisData:mostRecentTimestamps:maxFrameRate:;
@end
