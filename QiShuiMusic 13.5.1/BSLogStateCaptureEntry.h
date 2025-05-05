@interface BSLogStateCaptureEntry : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) @? captureBlock;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)captureBlock;
- (id)title;
- (void).cxx_destruct;
- (id)queue;
@end
