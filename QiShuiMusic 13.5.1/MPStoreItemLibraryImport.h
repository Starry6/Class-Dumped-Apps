@interface MPStoreItemLibraryImport : NSObject
@property (nonatomic) NSArray importElements;
@property (nonatomic) BOOL addToCloudLibrary;
@property (nonatomic) MPModelObject referralObject;
- (void).cxx_destruct;
- (id)referralObject;
- (id)importElements;
- (id)initWithImportElements:usingCloudLibraryDestination:;
- (id)initWithImportElements:referralObject:usingCloudLibraryDestination:;
- (BOOL)addToCloudLibrary;
@end
