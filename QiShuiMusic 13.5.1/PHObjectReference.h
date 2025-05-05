@interface PHObjectReference : NSObject
@property (nonatomic) NSURL libraryURL;
@property (nonatomic) NSString representedType;
@property (nonatomic) NSString localIdentifier;
@property (nonatomic) NSArray writableTypeIdentifiersForItemProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)libraryURL;
- (id)localIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)loadDataWithTypeIdentifier:forItemProviderCompletionHandler:;
- (id)representedType;
- (id)initWithLocalIdentifier:libraryURL:;
- (id)initWithDictionary:referenceType:;
- (id)dictionaryForReferenceType:;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)referenceForObject:;
+ (id)objectWithItemProviderData:typeIdentifier:error:;
+ (id)representedType;
+ (id)filteredObjectReferences:inPhotoLibrary:;
@end
