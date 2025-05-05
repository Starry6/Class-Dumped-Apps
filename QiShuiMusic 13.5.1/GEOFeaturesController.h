@interface GEOFeaturesController : NSObject
@property (nonatomic) NSArray features;
@property (nonatomic) <GEOFeaturesControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)valueChangedForGEOConfigKey:;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)setFeatures:;
- (id)delegate;
- (void).cxx_destruct;
- (id)features;
- (void)_initializeFeatures;
@end
