@interface AWESearchSmartPagingService : NSObject
@property (nonatomic) AWESearchSmartPagingServiceStorage storage;
- (id)fetchFeatureInfoWithConfig:;
- (id)fetchFeatureInfoWithConfig:withTryLock:;
- (void)setStorage:;
- (id)storage;
- (void).cxx_destruct;
@end
