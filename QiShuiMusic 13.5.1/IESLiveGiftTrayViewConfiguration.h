@interface IESLiveGiftTrayViewConfiguration : NSObject
@property (nonatomic) BOOL disableCombo;
@property (nonatomic) BOOL disablePostAnimation;
@property (nonatomic) BOOL disableMultiInteractGift;
@property (nonatomic) BOOL disableTrayTag;
- (BOOL)disableCombo;
- (BOOL)disableMultiInteractGift;
- (BOOL)disablePostAnimation;
- (BOOL)disableTrayTag;
- (void)setDisableCombo:;
- (void)setDisableMultiInteractGift:;
- (void)setDisablePostAnimation:;
- (void)setDisableTrayTag:;
@end
