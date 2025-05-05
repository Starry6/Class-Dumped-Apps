@interface HMDStingerBlocker : NSObject
@property (nonatomic) NSMutableSet catchBlockSet;
- (id)blockKeyForCls:selector:isInstance:;
- (id)catchBlockSet;
- (BOOL)checkBlockForCls:selector:isInstance:;
- (void)excludeClassMethodForCls:selector:;
- (void)excludeInstanceMethodForCls:selector:;
- (BOOL)hitBlockListForCls:selector:isInstance:;
- (void)setCatchBlockSet:;
- (void)setupBlockSet;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
