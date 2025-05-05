@interface MKGeoJSONFeature : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSData properties;
@property (nonatomic) NSArray geometry;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)geometry;
- (id)identifier;
- (id)_initWithGeoJSONObject:error:;
- (id)properties;
- (void).cxx_destruct;
- (id)_initWithProperties:geometry:identifier:;
@end
