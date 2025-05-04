@interface AWEPlayInteractionEntertainmentIAPMaskPresenter : AWEPlayInteractionEntertainmentBaseMaskPresenter
@property (nonatomic) <AWEEntertainmentVideoTrialDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getPreviewConfig;
- (id)getRecType:;
- (id)getSchemaParams;
- (id)createAnnieXCardConfig;
- (BOOL)disableVideoRepeat;
- (BOOL)shouldUsePreviewMask;
- (BOOL)shouldHiddenEffectMaskContainer;
- (BOOL)shouldShowMaskInTrial;
- (id)schemaForStandardAnnieXContainerWithSchema:;
- (id)buySchemaParameters;
- (id)getCacheData;
- (id)cardIdentifier;
- (BOOL)shouldPreload;
@end
