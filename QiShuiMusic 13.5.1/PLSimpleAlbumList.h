@interface PLSimpleAlbumList : NSObject
@property (nonatomic) NSOrderedSet containers;
@property (nonatomic) Q containersCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)photoLibrary;
- (id)containers;
- (id)managedObjectContext;
- (BOOL)isEmpty;
- (void)setContainers:;
- (id)containersRelationshipName;
- (void).cxx_destruct;
- (unsigned long long)containersCount;
- (BOOL)canEditContainers;
- (id)initWithAssetContainers:;
- (id)initWithAssetContainer:;
@end
