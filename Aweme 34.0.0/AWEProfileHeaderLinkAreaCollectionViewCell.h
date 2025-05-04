@interface AWEProfileHeaderLinkAreaCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWECommonLinkAreaView commonLinkAreaView;
@property (nonatomic) AWEProfileLinkAreaView profileLinkAreaView;
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) <AWEProfileHeaderLinkAreaCollectionViewCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithHeaderContext:;
- (id)commonLinkAreaView;
- (id)profileLinkAreaView;
- (void)profileLinkAreaViewTapWithlinkModel:;
- (void)refreshLinkAreaHeight:;
- (void)setCommonLinkAreaView:;
- (void)setProfileLinkAreaView:;
- (id)delegate;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
@end
