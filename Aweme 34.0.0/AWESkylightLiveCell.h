@interface AWESkylightLiveCell : UICollectionViewCell
@property (nonatomic) AWESkylightCellEntranceView entranceView;
@property (nonatomic) AWEConcernSkylightCellModel cellModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCellModel:;
- (void)configWithCellModel:;
- (id)liveModuleService;
- (id)entranceView;
- (void)playLivePreview;
- (void)stopLivePreview;
- (id)getLivePreviewManager;
- (void)changeBreathAnimationState:;
- (void)setEntranceView:;
- (id)getTagFromColorWithModel:;
- (id)getTagToColorWithModel:;
- (BOOL)followTopLiveBreath;
- (void)configUIWithModel:owner:isLinkMic:isPinedUser:;
- (id)aAWELiveModuleServiceDOUYINHTSAdaper;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)cellModel;
+ (Class)aAWELiveModuleServiceDOUYINHTSAdaperClass;
+ (id)reuseIdentifier;
@end
