@interface SAMPMediaEntityList : SAAbstractItemList
@property (nonatomic) NSInteger mediaType;
@property (nonatomic) SAMPCollection parentCollection;
- (int)mediaType;
- (void)setMediaType:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)parentCollection;
- (void)setParentCollection:;
+ (id)mediaEntityList;
+ (id)mediaEntityListWithDictionary:context:;
@end
