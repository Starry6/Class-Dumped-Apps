@interface AWEUndertakeDataModel : MTLModel
@property (nonatomic) AWEUndertakeActionLynxPopup lynxPopupAction;
@property (nonatomic) AWEUndertakeActionFeedBottomBanner feedBottomBannerAction;
@property (nonatomic) AWEUndertakeActionBackupToast backupToastAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxPopupAction;
- (id)feedBottomBannerAction;
- (id)backupToastAction;
- (void)setLynxPopupAction:;
- (void)setFeedBottomBannerAction:;
- (void)setBackupToastAction:;
- (void).cxx_destruct;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
