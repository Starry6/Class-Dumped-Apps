@interface BRFrameworkContainerHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned short)br_capabilityToMoveFromURL:toNewParent:error:;
- (void)_resolveItemIdentifierAtURL:withHandler:;
- (id)fetchAllContainersByIDWithError:;
- (id)fetchContainerForMangledID:personaID:;
- (id)queryPathsForPersona:withError:;
- (BOOL)canFetchAllContainersByID;
- (id)itemIDForURL:error:;
@end
