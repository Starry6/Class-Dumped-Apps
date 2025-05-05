@interface PLMainQueuePhotoLibrary : PLPhotoLibrary
- (void)dealloc;
- (id)initWithName:libraryBundle:options:;
+ (void)_resetSharedInstance;
+ (id)systemMainQueuePhotoLibrary;
@end
