@interface AWESearchSmartFeature : NSObject
+ (id)fetchFeatureInfoWithConfigNoTryLockWithBizName:andKey:;
+ (id)fetchFeatureInfoWithConfigNoTryLockWithBizName:andKeys:;
+ (id)fetchFeatureInfoWithConfigNoTryLockWithFeatureFetchKeys:;
+ (id)fetchFeatureInfoWithConfigTryLockWithBizName:andKey:tryLock:;
+ (id)fetchFeatureInfoWithConfigTryLockWithBizName:andKeys:tryLock:;
+ (id)fetchFeatureInfoWithConfigTryLockWithFeatureFetchKeys:tryLock:;
+ (id)fetchFeatureInfoWithConfig:;
+ (id)fetchFeatureInfoWithConfig:withTryLock:;
@end
