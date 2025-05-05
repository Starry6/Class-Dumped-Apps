@interface WBSStartPageSectionManager : NSObject
@property (nonatomic) NSNumber test_siriSuggestionsEnabled;
@property (nonatomic) NSArray sections;
@property (nonatomic) NSArray enabledSectionIdentifiers;
@property (nonatomic) NSArray sectionIdentifiers;
@property (nonatomic) NSArray cloudKitStartPageSectionOrder;
- (id)sections;
- (void)invalidateCache;
- (void)setSectionIdentifier:enabled:;
- (id)init;
- (id)sectionIdentifiers;
- (void)dealloc;
- (id)initWithStorage:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)test_siriSuggestionsEnabled;
- (void)setSectionsIdentifiers:enabledIndexes:;
- (void)resetToDefault;
- (void)saveSections:andUpdateInMemoryCache:;
- (id)enabledSectionIdentifiers;
- (id)sectionForIdentifier:;
- (void).cxx_destruct;
- (id)cloudKitStartPageSectionOrder;
- (void)setTest_siriSuggestionsEnabled:;
+ (id)defaultManager;
+ (id)allSections;
@end
