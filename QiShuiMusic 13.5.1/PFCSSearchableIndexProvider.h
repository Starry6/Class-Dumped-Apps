@interface PFCSSearchableIndexProvider : NSObject
- (id)createPrivateSearchableIndexWithPath:;
- (id)defaultSearchableIndex;
- (id)createPrivateSearchableIndexWithName:protectionClass:bundleIdentifier:;
- (id)defaultPrivateSearchableIndex;
- (id)createSearchableIndexWithName:protectionClass:bundleIdentifier:;
@end
