@interface OS_dispatch_data : _NSDispatchData
@property (nonatomic) Q length;
@property (nonatomic) r^v bytes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_isCompact;
- (void)_setContext:;
- (id)init;
- (void)dealloc;
- (id)initWithBytes:length:copy:freeWhenDone:bytesAreVM:;
- (id)_getContext;
- (id)bytes;
- (void)_setTargetQueue:;
- (id)debugDescription;
- (void)_suspend;
- (void)_activate;
- (unsigned long long)length;
- (void)_setFinalizer:;
- (void)_resume;
- (BOOL)_bytesAreVM;
+ (id)allocWithZone:;
@end
