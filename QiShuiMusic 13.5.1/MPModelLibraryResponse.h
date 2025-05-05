@interface MPModelLibraryResponse : MPModelResponse
@property (nonatomic) NSArray sectionKeepLocalStatusConfigurations;
@property (nonatomic) MPMediaLibraryConnectionAssertion libraryAssertion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRequest:;
- (void)dealloc;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:responseHandler:;
- (void).cxx_destruct;
- (void)_mediaLibraryDidChangeNotification:;
- (id)sectionKeepLocalStatusConfigurations;
- (void)setSectionKeepLocalStatusConfigurations:;
- (id)libraryAssertion;
- (void)setLibraryAssertion:;
@end
