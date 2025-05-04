@interface AWEStorageQueue : NSObject
@property (nonatomic) AWEStorage storage;
- (void)inStorage:;
- (id)storage;
- (void).cxx_destruct;
- (id)initWithDomain:;
- (id)initWithStorage:;
+ (void)inQueue:;
+ (BOOL)enabledQueue;
+ (void)setEnabledQueue:;
+ (id)universalQueue;
@end
