@interface ASDRollableLog : NSObject
@property (nonatomic) ASDLogFileOptions logOptions;
- (id)logOptions;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithLogOptions:;
- (void)writeString:;
@end
