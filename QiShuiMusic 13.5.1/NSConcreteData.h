@interface NSConcreteData : NSData
- (BOOL)_copyWillRetain;
- (BOOL)_isCompact;
- (id)_createDispatchData;
- (void)getBytes:;
- (id)init;
- (void)dealloc;
- (BOOL)_providesConcreteBacking;
- (id)initWithBytes:length:copy:freeWhenDone:bytesAreVM:;
- (id)bytes;
- (void)getBytes:length:;
- (void)getBytes:range:;
- (id)initWithBytes:length:copy:deallocator:;
- (unsigned long long)length;
- (id)copyWithZone:;
@end
