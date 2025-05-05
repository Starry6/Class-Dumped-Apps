@interface TTVideoEngineThreadInfo : NSObject
@property (nonatomic) I thread;
@property (nonatomic) float usage;
@property (nonatomic) q priority;
@property (nonatomic) q weight;
@property (nonatomic) NSString name;
- (unsigned int)thread;
- (float)usage;
- (void)setPriority:;
- (void)setName:;
- (long long)weight;
- (void)setWeight:;
- (void).cxx_destruct;
- (void)setUsage:;
- (id)name;
- (long long)priority;
- (void)setThread:;
@end
