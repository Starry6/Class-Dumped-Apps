@interface AWEStorageQueue : NSObject
@property (nonatomic) AWEStorage storage;
- (void)inStorage:;
- (id)initWithDomain:;
- (id)initWithStorage:;
- (id)storage;
- (void).cxx_destruct;
+ (BOOL)enabledQueue;
+ (void)inQueue:;
+ (void)setEnabledQueue:;
+ (id)universalQueue;
@end
