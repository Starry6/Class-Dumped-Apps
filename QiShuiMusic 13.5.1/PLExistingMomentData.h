@interface PLExistingMomentData : NSObject
@property (nonatomic) NSObject<NSCopying> objectID;
@property (nonatomic) Q numberOfAssets;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSDateInterval dateInterval;
- (id)dateInterval;
- (id)objectID;
- (id)startDate;
- (id)initWithMoment:;
- (unsigned long long)hash;
- (id)endDate;
- (void).cxx_destruct;
- (void)registerAsset:;
- (BOOL)isEqual:;
- (unsigned long long)numberOfAssets;
@end
