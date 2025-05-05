@interface ML3ClientImportServiceSession : NSObject
- (void)dealloc;
- (BOOL)finish;
- (void).cxx_destruct;
- (BOOL)begin;
- (id)initWithLibrary:connection:configuration:;
- (BOOL)addTrack:persistentID:;
- (BOOL)updateTrack:persistentID:;
- (BOOL)removeTrack:persistentID:;
@end
