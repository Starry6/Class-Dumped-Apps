@interface MRClientDiagnosticsDataSource : NSObject
@property (nonatomic) NSMutableDictionary map;
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) NSString diagnostic;
- (void)add:;
- (id)init;
- (void)remove:;
- (id)lock;
- (void).cxx_destruct;
- (id)map;
- (id)diagnostic;
+ (id)sharedDataSource;
@end
