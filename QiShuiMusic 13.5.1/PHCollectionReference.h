@interface PHCollectionReference : PHObjectReference
@property (nonatomic) BOOL transient;
@property (nonatomic) NSString transientIdentifier;
@property (nonatomic) NSString transientTitle;
- (void).cxx_destruct;
- (id)transientIdentifier;
- (BOOL)transient;
- (id)initWithDictionary:referenceType:;
- (id)dictionaryForReferenceType:;
- (id)initWithLocalIdentifier:libraryURL:transientIdentifier:transientTitle:;
- (id)_transientCollectionInLibrary:;
- (id)transientTitle;
+ (id)representedType;
@end
