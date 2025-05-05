@interface EDImportantMLModelOutput : NSObject
@property (nonatomic) q important;
@property (nonatomic) NSDictionary importantProbability;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (void)setImportant:;
- (long long)important;
- (id)initWithImportant:importantProbability:;
- (id)importantProbability;
- (void)setImportantProbability:;
@end
