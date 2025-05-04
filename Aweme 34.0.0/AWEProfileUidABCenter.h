@interface AWEProfileUidABCenter : NSObject
@property (nonatomic) NSMutableDictionary newABTestKeyValueMap;
@property (nonatomic) BOOL updateLock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)handleABTestChange:;
- (id)currentUserStorageKey;
- (void)updateABValue;
- (void)resetABValue;
- (id)newABTestKeyValueMap;
- (void)updateABValueForABClassName:;
- (void)updateRawValueForABTestValue:abClassName:;
- (id)newABTestDefaultKeyValueMap;
- (void)setNewABTestKeyValueMap:;
- (long long)integerValueForABClassName:;
- (BOOL)boolValueForABClassName:;
- (id)dictValueForABClassName:;
- (id)arrayValueForABClassName:;
- (double)doubleValueForABClassName:;
- (id)stringValueForABClassName:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)updateLock;
- (void)setUpdateLock:;
+ (id)sharedInstance;
@end
