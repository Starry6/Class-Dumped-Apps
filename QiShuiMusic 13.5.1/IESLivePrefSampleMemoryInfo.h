@interface IESLivePrefSampleMemoryInfo : NSObject
@property (nonatomic) NSNumber app_usage;
@property (nonatomic) NSNumber cost;
@property (nonatomic) NSNumber availableMemory;
@property (nonatomic) NSNumber generateTime;
- (id)availableMemory;
- (id)app_usage;
- (id)generateTime;
- (void)setApp_usage:;
- (void)setAvailableMemory:;
- (void)setGenerateTime:;
- (id)cost;
- (void).cxx_destruct;
- (void)setCost:;
@end
