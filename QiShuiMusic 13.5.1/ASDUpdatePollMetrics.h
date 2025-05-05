@interface ASDUpdatePollMetrics : NSObject
@property (nonatomic) NSDate pollTime;
@property (nonatomic) NSString reason;
@property (nonatomic) NSArray bundleIDs;
- (id)bundleIDs;
- (id)dictionary;
- (id)initWithDictionary:;
- (id)reason;
- (void)setReason:;
- (void).cxx_destruct;
- (id)description;
- (void)setBundleIDs:;
- (id)pollTime;
- (void)setPollTime:;
@end
