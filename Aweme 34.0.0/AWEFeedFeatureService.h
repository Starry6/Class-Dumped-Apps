@interface AWEFeedFeatureService : HTSService
@property (nonatomic) AWEFeedFeatureCollector featureCollector;
@property (nonatomic) NSMutableArray featureSequenceList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)logUserAction:withModel:;
- (id)sequenceFeatureUploadForRequest:;
- (id)searchFeature;
- (void)addFeedFeatureProvider:;
- (void)removeFeedFeatureProvider:;
- (void)createSequenceItemIfNeeded:forFeatureSequence:extraInfo:;
- (void)updateFeature:forKey:extra:;
- (id)featureForKey:extra:;
- (id)featureSequenceList;
- (void)setFeatureCollector:;
- (id)featureCollector;
- (void)createFeatureSequence;
- (void)setFeatureSequenceList:;
- (void)addFeatureSequence:;
- (void).cxx_destruct;
@end
