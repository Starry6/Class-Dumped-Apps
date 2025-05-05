@interface GEOMapItemContainedPlace : NSObject
@property (nonatomic) Q featureId;
@property (nonatomic) Q parentFeatureId;
@property (nonatomic) <GEOMapItem> parent;
@property (nonatomic) NSArray children;
@property (nonatomic) NSArray siblings;
- (id)init;
- (id)children;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)featureId;
- (id)parent;
- (id)initWithContainedPlace:;
- (unsigned long long)parentFeatureId;
- (id)siblings;
@end
