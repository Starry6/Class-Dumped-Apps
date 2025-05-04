@interface AWEColdLaunchAdjustVolumePortraitManager : NSObject
@property (nonatomic) NSDictionary portraitPersistBlockMap;
@property (nonatomic) NSArray portraitsList;
@property (nonatomic) NSString portraitAge;
@property (nonatomic) double portraitVolumeAverage;
@property (nonatomic) double portraitVolumeStandardDeviation;
- (void)setPortraitsList:;
- (void)persistPortraits;
- (id)portraitAge;
- (id)portraitsList;
- (id)portraitPersistBlockMap;
- (id)persistAgePortraitBlock;
- (id)persistVolumeAverageBlock;
- (id)persistVolumeStandardDeviationBlock;
- (double)portraitVolumeAverage;
- (double)portraitVolumeStandardDeviation;
- (void)setPortraitPersistBlockMap:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
