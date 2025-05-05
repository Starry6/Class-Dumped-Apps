@interface IESECCommentSKUSpecSectionController : IGListSectionController
@property (nonatomic) IESECCommentSKUSpecViewModel viewModel;
@property (nonatomic) IESECCommentNewSKUContentView contentView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)sizeForSupplementaryViewOfKind:atIndex:;
- (id)supplementaryViewSource;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:atIndex:;
- (long long)numberOfItems;
- (id)contentView;
- (id)init;
- (id)viewModel;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setViewModel:;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (void)didSelectItemAtIndex:;
- (id)inset;
- (id)sizeForItemAtIndex:;
@end
