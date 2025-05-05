@interface IESLiveLRUCleanStrategy : NSObject
@property (nonatomic) NSMutableDictionary trigerCleanerTimeRecordMap;
@property (nonatomic) NSNumber cleanDuration;
@property (nonatomic) <IESLiveEffectCleanDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cleanDuration;
- (long long)handleTrimEffectMoment;
- (void)handleTrimEffectWithContext:;
- (void)setCleanDuration:;
- (void)setTrigerCleanerTimeRecordMap:;
- (id)trigerCleanerTimeRecordMap;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
