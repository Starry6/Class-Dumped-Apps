@interface AFDataStore : NSObject
- (id)init;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:;
- (void).cxx_destruct;
- (id)initWithEntries:;
- (void)setImageData:forKey:;
- (id)imageDataForKey:;
@end
