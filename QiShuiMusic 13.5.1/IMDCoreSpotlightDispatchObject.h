@interface IMDCoreSpotlightDispatchObject : NSObject
@property (nonatomic) CRRecentContactsLibrary recentsInstance;
@property (nonatomic) BOOL allowsOverrideOfObjects;
@property (nonatomic) BOOL shouldAddToSuggestions;
@property (nonatomic) BOOL shouldAddToSpotlight;
@property (nonatomic) BOOL shouldAddToCoreRecents;
- (id)init;
- (void).cxx_destruct;
- (id)recentsInstance;
- (void)setRecentsInstance:;
- (BOOL)allowsOverrideOfObjects;
- (void)setAllowsOverrideOfObjects:;
- (BOOL)shouldAddToSuggestions;
- (void)setShouldAddToSuggestions:;
- (BOOL)shouldAddToSpotlight;
- (void)setShouldAddToSpotlight:;
- (BOOL)shouldAddToCoreRecents;
- (void)setShouldAddToCoreRecents:;
+ (id)sharedInstance;
@end
