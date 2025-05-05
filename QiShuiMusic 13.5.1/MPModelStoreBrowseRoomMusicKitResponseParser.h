@interface MPModelStoreBrowseRoomMusicKitResponseParser : NSObject
@property (nonatomic) MPSectionedCollection results;
- (id)results;
- (void).cxx_destruct;
- (id)_parsedSectionedCollection;
- (id)initWithRawResponseOutput:sectionBuilder:contentItemBuilder:filteredFCKinds:userIdentity:;
- (id)_parsedElements:;
- (id)_parsedContentNode:additionalAttributesFromParent:;
@end
