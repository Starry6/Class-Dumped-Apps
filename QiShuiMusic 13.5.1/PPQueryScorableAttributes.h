@interface PPQueryScorableAttributes : NSObject
@property (nonatomic) NSNumber portraitStaticScore;
@property (nonatomic) NSData portraitFeatureVector;
@property (nonatomic) NSNumber portraitFeatureVectorVersion;
@property (nonatomic) NSDictionary portraitNamedEntities;
- (void).cxx_destruct;
- (id)portraitStaticScore;
- (void)setPortraitStaticScore:;
- (id)portraitFeatureVector;
- (void)setPortraitFeatureVector:;
- (id)portraitFeatureVectorVersion;
- (void)setPortraitFeatureVectorVersion:;
- (id)portraitNamedEntities;
- (void)setPortraitNamedEntities:;
@end
