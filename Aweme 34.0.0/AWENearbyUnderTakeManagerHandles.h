@interface AWENearbyUnderTakeManagerHandles : NSObject
@property (nonatomic) NSDictionary undertakeManagerHandles;
- (void)initUndertakeManagerHandles;
- (void)setUndertakeManagerHandles:;
- (id)undertakeManagerHandles;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)nearbyUndertakeManager;
+ (id)getUndertakeManagerWithPageType:;
+ (id)getUndertakeAutoJudgeByUserTab;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
