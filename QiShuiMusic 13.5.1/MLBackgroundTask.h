@interface MLBackgroundTask : NSObject
@property (nonatomic) NSString taskIdentifier;
- (id)taskIdentifier;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setTaskIdentifier:;
- (id)activityForScheduling;
+ (BOOL)cancelTaskWithIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)scheduleTask:;
+ (BOOL)cancelAllTasks;
+ (BOOL)taskIsScheduledWithIdentifier:;
@end
