@interface AWEIMSimilarEmoticonCollectionViewCell : AWEIMVerticalMutiableGIFEmoticonCollectionViewCell
@property (nonatomic) <AWEIMBaseCollectionViewCellEventProtocol> cellEventDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithViewModel:;
- (id)renderModel:context:forIndexPath:inCollectionView:;
- (id)cellEventDelegate;
- (void)setCellEventDelegate:;
- (void)addCustomAutoLayout;
- (void)layoutSubviewsFrame;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
