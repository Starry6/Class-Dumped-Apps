@interface AWEECOMIMTopChatInfoBannerCell : UICollectionViewCell
@property (nonatomic) AWEECOMIMChatTopInfoView chatInfoView;
@property (nonatomic) AWEECOMIMChatTopInfoItem item;
@property (nonatomic) <AWEECOMIMTopChatInfoBannerCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindItem:itemIndex:itemCount:encryptedShopID:;
- (long long)rightsViewCount;
- (void)chatTopInfoViewDidClickActionBtn:itemIndex:;
- (void)chatTopInfoViewButtonEventAfterRequest:itemIndex:;
- (id)chatInfoView;
- (void)setChatInfoView:;
- (id)delegate;
- (void)setItem:;
- (id)initWithFrame:;
- (id)item;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (double)heightWithIsMultiItem:;
@end
