@interface AWEFantaTujiActFeatureProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onDataCollector:collectData:;
- (void)loadFeatureProvider;
+ (id)sharedInstance;
@end
