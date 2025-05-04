@interface AWEGrouponTabHandles : NSObject
@property (nonatomic) NSDictionary tabHandles;
- (void)initHandles;
- (void)setTabHandles:;
- (id)tabHandles;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)nearbyHandle;
+ (id)handleWithPageType:;
+ (void)handleAllDataModelWithBlk:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
