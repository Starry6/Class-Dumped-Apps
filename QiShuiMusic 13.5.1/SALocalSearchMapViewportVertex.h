@interface SALocalSearchMapViewportVertex : AceObject
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (double)latitude;
- (void)setLatitude:;
- (id)encodedClassName;
- (void)setLongitude:;
- (double)longitude;
+ (id)mapViewportVertex;
+ (id)mapViewportVertexWithDictionary:context:;
@end
