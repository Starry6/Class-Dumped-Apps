@interface MLPredictionEvent : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString modelName;
@property (nonatomic) NSNumber firstPartyExecutable;
@property (nonatomic) NSNumber modelType;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)modelName;
- (id)modelType;
- (void)setModelType:;
- (void)setModelName:;
- (id)init;
- (id)bundleIdentifier;
- (void)maybeLogPredictionEvent:;
- (id)featuresPredictionCountSoFar;
- (void)setFirstPartyExecutable:;
- (void)setBundleIdentifier:;
- (id)firstPartyExecutable;
- (id)featuresPredictionDuration;
- (void).cxx_destruct;
- (id)predictionEventQueue;
- (id)name;
- (id)dictionaryRepresentation;
@end
