@interface CNVirtualReaderWriterScheduler : NSObject
@property (nonatomic) CNSuspendableSchedulerDecorator scheduler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithScheduler:;
- (id)scheduler;
- (void)performSynchronousReaderBlock:;
- (void)suspend;
- (void)resume;
- (id)performWriterBlock:;
- (void).cxx_destruct;
- (id)performReaderBlock:;
- (void)performSynchronousWriterBlock:;
@end
