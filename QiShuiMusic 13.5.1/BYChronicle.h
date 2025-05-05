@interface BYChronicle : NSObject
@property (nonatomic) NSMutableDictionary featureEntries;
- (id)init;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)recordFeatureShown:;
- (void)addEntry:forFeature:;
- (id)entryForFeature:;
- (id)featureEntries;
- (void)setFeatureEntries:;
@end
