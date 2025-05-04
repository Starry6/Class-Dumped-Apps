@interface AWERecordAIGCCardHeader : UICollectionReusableView
@property (nonatomic) UIButton createButton;
@property (nonatomic) UIButton loraInfoButton;
@property (nonatomic) ACCAIGCLoraProfileModel profileModel;
@property (nonatomic) BOOL hideCreateEffect;
@property (nonatomic) BOOL hideInfoButton;
@property (nonatomic) NSDictionary commonTrackDict;
@property (nonatomic) <AWERecordAIGCCardHeaderDelegate> delegate;
- (void)setCommonTrackDict:;
- (id)commonTrackDict;
- (void)setHideCreateEffect:;
- (void)setHideInfoButton:;
- (id)loraInfoButton;
- (BOOL)hideInfoButton;
- (BOOL)hideCreateEffect;
- (void)detailInfoVCDismissWith:hadDeleteModel:;
- (void)onCreateEffect;
- (void)onManagerLora;
- (void)setLoraInfoButton:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)createButton;
- (void)setCreateButton:;
- (id)profileModel;
- (void)setProfileModel:;
@end
