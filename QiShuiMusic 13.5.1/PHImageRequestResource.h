@interface PHImageRequestResource : NSObject
@property (nonatomic) I resourceType;
@property (nonatomic) I version;
@property (nonatomic) I recipeID;
@property (nonatomic) PLUniformTypeIdentifier uniformTypeIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uniformTypeIdentifier;
- (unsigned int)version;
- (unsigned int)resourceType;
- (id)initWithDictionary:;
- (unsigned int)recipeID;
- (id)initWithResourceType:version:recipeID:uti:conformsToTypes:;
- (void).cxx_destruct;
- (id)initWithResource:;
- (id)description;
+ (id)imageRequestResourceForDataStoreKey:store:assetObjectID:context:;
+ (id)dictionaryRepresentationFromResourceIdentity:;
+ (id)possibleClassesInDictionaryRepresentation;
@end
