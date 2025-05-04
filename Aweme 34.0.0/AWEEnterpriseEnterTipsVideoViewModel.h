@interface AWEEnterpriseEnterTipsVideoViewModel : AWEEnterpriseIMMessageCustomerBaseViewModel
@property (nonatomic) NSString itemTitle;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSArray imgURLList;
- (void)configDataWithContent:ext:localExt:;
- (void)transferToAwemeVideo;
- (void)setImgURLList:;
- (id)imgURLList;
- (id)itemID;
- (void)setItemID:;
- (id)contentSize;
- (void).cxx_destruct;
- (id)itemTitle;
- (void)setItemTitle:;
- (void)updateWithModel:;
@end
