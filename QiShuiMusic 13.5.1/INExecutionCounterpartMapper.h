@interface INExecutionCounterpartMapper : NSObject
@property (nonatomic) NSMutableDictionary _mapping;
@property (nonatomic) BOOL _filled;
@property (nonatomic) {os_unfair_lock_s=I} _lock;
- (id)_lock;
- (id)init;
- (void)dealloc;
- (void)installedApplicationsDidChange:;
- (id)counterpartIdentifiersForLocalIdentifier:;
- (id)_mapping;
- (void).cxx_destruct;
- (id)localIdentifiersForCounterpartIdentifier:;
- (void)reset;
- (BOOL)_filled;
- (id)counterpartBundleIdentifiersForBundleIdentifier:;
@end
