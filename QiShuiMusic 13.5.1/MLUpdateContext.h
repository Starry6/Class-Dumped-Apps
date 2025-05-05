@interface MLUpdateContext : NSObject
@property (nonatomic) MLUpdateTask task;
@property (nonatomic) MLModel<MLWritable> model;
@property (nonatomic) q event;
@property (nonatomic) NSDictionary metrics;
@property (nonatomic) NSDictionary parameters;
@property (nonatomic) NSError error;
- (id)model;
- (void)setEvent:;
- (long long)event;
- (void)setModel:;
- (void)setMetrics:;
- (id)metrics;
- (void)setError:;
- (id)task;
- (id)error;
- (id)parameters;
- (void)setTask:;
- (void).cxx_destruct;
- (id)description;
- (void)setParameters:;
+ (id)updateContextWithTask:model:event:metrics:parameters:;
+ (id)updateContextForEvent:metrics:parameters:error:;
@end
