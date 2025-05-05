@interface CUINamedRecognitionObject : CUINamedLookup
@property (nonatomic) q version;
@property (nonatomic) NSData objectData;
@property (nonatomic) {?=[4]} referenceOriginTransformation;
- (long long)version;
- (id)description;
- (id)initWithName:usingRenditionKey:fromTheme:;
- (id)objectData;
- (id)referenceOriginTransformation;
@end
