@interface AWEPOIVirgoUnitDefaultManager : NSObject
@property (nonatomic) NSMutableDictionary unitMap;
@property (nonatomic) NSLock unitLock;
- (void)registerUnit:withKey:;
- (void)removeUnitWithKey:;
- (BOOL)executeWithKey:params:;
- (void)setUnitMap:;
- (void)setUnitLock:;
- (id)unitLock;
- (id)unitMap;
- (id)init;
- (void).cxx_destruct;
@end
