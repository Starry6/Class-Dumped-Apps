@interface MKCollectionStorageRefiner : NSObject
- (void).cxx_destruct;
- (id)initWithCollectionURL:;
- (id)initWithCollectionStorage:;
- (void)_sharedInitWithCollectionStorage:;
- (void)fetchMapItems:;
- (void)fetchMapItems:traits:;
@end
