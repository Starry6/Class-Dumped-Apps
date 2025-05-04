@interface AWEProfileHeaderHotSpotListCell : UICollectionViewCell
@property (nonatomic) AWESimpleInfoView hotSpotListEntranceView;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) @? handleTapActionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithContext:;
- (void)onTapGestureAction:;
- (void)handleTapGestureWithLocation:;
- (id)hotSpotListEntranceView;
- (id)handleTapActionBlock;
- (void)setHandleTapActionBlock:;
- (void)setHotSpotListEntranceView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)tapGesture;
- (void)setTapGesture:;
- (void)setupSubviews;
@end
