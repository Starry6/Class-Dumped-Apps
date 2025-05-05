@interface ML3MaintenanceTasksOperation : NSOperation
@property (nonatomic) ML3MusicLibrary library;
@property (nonatomic) NSObject<OS_xpc_object> activity;
- (id)activity;
- (void)main;
- (id)library;
- (void).cxx_destruct;
- (id)initWithLibrary:activity:;
@end
