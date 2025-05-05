@interface PPSpotlightScoringFeatureVector : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)encodeAsData;
- (void)addQidString:;
- (BOOL)containsQidString:;
- (id)qidStrings;
+ (id)decodeFeatureVectorFromData:version:;
+ (id)featureVectorVersion;
@end
