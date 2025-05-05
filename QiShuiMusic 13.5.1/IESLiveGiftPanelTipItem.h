@interface IESLiveGiftPanelTipItem : IESLiveDynamicModel
@property (nonatomic) NSString identifier;
@property (nonatomic) NSSet dependencies;
@property (nonatomic) @? showTipIfNeeded;
- (id)showTipIfNeeded;
- (void)setShowTipIfNeeded:;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
@end
