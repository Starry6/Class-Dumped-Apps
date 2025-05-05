@interface MPModelStoreGroupingsMusicKitResponseParser : NSObject
@property (nonatomic) MPSectionedCollection results;
- (id)results;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRawResponseOutput:sectionBuilder:contentItemBuilder:filteredFCKinds:userIdentity:rootObjectIdentifier:options:storeURLBag:;
- (id)_parsedSectionedCollection;
- (id)_parsedEditorialElements:;
- (id)_parsedEditorialElementX:;
- (id)_parsedEditorialElement:;
- (id)bagRoomURLRegularExpression;
- (id)musicAPIURLWithLinkURLString:;
- (id)linkSectionWithDictionary:;
- (long long)featuredContentKindForNode:;
- (id)attributesForContentNode:;
- (id)firstChildOfContentNode:;
- (id)childrenOfContentNode:;
- (id)linksForContentNode:;
- (BOOL)featuredContentKindCorrespondsToItem:;
- (BOOL)isContentNodeAnEditorialElement:;
- (id)_parsedContentNode:uniformContentItemTypeResolver:additionalAttributesFromParent:;
@end
