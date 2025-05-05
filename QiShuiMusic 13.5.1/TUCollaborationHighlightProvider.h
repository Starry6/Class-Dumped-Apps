@interface TUCollaborationHighlightProvider : NSObject
@property (nonatomic) SWHighlightCenter highlightCenter;
@property (nonatomic) NSMutableDictionary collaborationIdentifierToPendingCollaborations;
@property (nonatomic) NSMutableDictionary collaborationIdentifierToBundleIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <TUCollaborationProviderDelegate> delegate;
- (id)init;
- (void)setDelegate:;
- (id)collaborationIdentifierToBundleIDs;
- (void)highlightCenterHighlightsDidChange:;
- (id)addTemporaryCollaboration:;
- (id)delegate;
- (void).cxx_destruct;
- (id)collaborationIdentifierToPendingCollaborations;
- (id)ckBundleIDForCollaborationIdentifier:;
- (id)collaborationHighlightForIdentifier:;
- (id)highlightCenter;
@end
