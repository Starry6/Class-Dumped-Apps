@interface LSGLContextConfig : NSObject
@property (nonatomic) BOOL useES3;
@property (nonatomic) BOOL fixES3Issue;
@property (nonatomic) NSString queueName;
- (void)setFixES3Issue:;
- (BOOL)fixES3Issue;
- (id)queueName;
- (void)setQueueName:;
- (void)setUseES3:;
- (BOOL)useES3;
- (id)init;
- (void).cxx_destruct;
- (id)toDict;
@end
