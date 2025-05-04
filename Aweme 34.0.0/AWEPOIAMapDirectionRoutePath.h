@interface AWEPOIAMapDirectionRoutePath : MTLModel
@property (nonatomic) NSString duration;
@property (nonatomic) NSArray steps;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDuration:;
- (id)steps;
- (void).cxx_destruct;
- (id)duration;
- (void)setSteps:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)stepsJSONTransformer;
+ (id)durationJSONTransformer;
@end
