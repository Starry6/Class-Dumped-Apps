@interface WebArchivePrivate : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCoreArchive:;
- (id)coreArchive;
- (void)setCoreArchive:;
@end
