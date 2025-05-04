@interface AWEProfileHeaderLongVideoSignatureCell : UICollectionViewCell
@property (nonatomic) AWEProfileHeaderLongVideoSignatureView longVideoSignatureView;
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithHeaderContext:;
- (id)longVideoSignatureView;
- (void)updateLongVideoSignatureViewHiddenStatus;
- (void)addTapMoreInfoButtonTrackEvent;
- (void)signatureViewDidTapMoreIntroInfoButton:;
- (void)setLongVideoSignatureView:;
- (id)initWithFrame:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setupUI;
@end
