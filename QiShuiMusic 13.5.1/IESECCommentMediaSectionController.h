@interface IESECCommentMediaSectionController : IESECCommentSectionController
@property (nonatomic) IESECCommentListKitMediasModel model;
@property (nonatomic) IESECCommentMediaSectionLayout sectionLayout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)sectionLayout;
- (void)setSectionLayout:;
- (id)sizeForSupplementaryViewOfKind:atIndex:;
- (id)supplementaryViewSource;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:atIndex:;
- (id)model;
- (long long)numberOfItems;
- (void)setModel:;
- (void).cxx_destruct;
- (id)sizeForItemAtIndex:;
@end
