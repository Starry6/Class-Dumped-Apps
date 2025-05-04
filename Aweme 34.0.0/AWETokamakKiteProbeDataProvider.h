@interface AWETokamakKiteProbeDataProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)extraMemoryLog;
- (BOOL)isContextEnabled;
- (id)memoryContext;
- (id)cpuContext;
- (id)gpuContext;
@end
