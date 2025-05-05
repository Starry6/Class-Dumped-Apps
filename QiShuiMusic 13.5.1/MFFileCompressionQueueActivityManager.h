@interface MFFileCompressionQueueActivityManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)log;
+ (void)_registerXPCActivity;
+ (void)scheduleActivityIfNeeded;
+ (void)unregisterXPCActivity;
+ (void)_unregisterXPCActivity;
+ (BOOL)compressFilesInQueue:shouldDefer:;
@end
