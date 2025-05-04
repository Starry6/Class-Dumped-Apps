@interface AWEVideoScreenRecordingBlocker : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) @ object;
@property (nonatomic) NSString keyPath;
@property (nonatomic) BOOL hasKey;
- (void)didReceiveStartRecordingScreen;
- (id)initWithRelatedObject:keyPath:handler:;
- (void)setHandler:;
- (id)keyPath;
- (void)dealloc;
- (BOOL)hasKey;
- (id)object;
- (void)setHasKey:;
- (void)setKeyPath:;
- (id)handler;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (void)setObject:;
+ (BOOL)object:hasKey:;
@end
