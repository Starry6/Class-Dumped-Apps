@interface AWEStudioFeatureRecordDurationItem : AWEStudioFeatureStatusBaseItem
@property (nonatomic) Q defaultIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithStorage:persistenceKey:defaultIndex:;
- (unsigned long long)getDurationIndex;
- (void)saveDurationIndex:;
- (unsigned long long)defaultIndex;
- (void)setDefaultIndex:;
@end
