@interface AWEPlayInteractionDescriptionCommonAlbumTruncationTokenController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createPlainTextTailLabelWithAttributedText:;
- (id)expandTagFont;
- (id)calculateTruncationTokenWithContext:;
- (id)advanceParserDescriptionWithContext:;
- (id)setTruncationTokenIfNeedWithContext:;
- (id)getDescriptionLabelTapActionWithContext:;
- (void)viewDidLoadWithContext:;
- (void)moreLabelDidClickAtExpandRegion:withParams:parserContext:;
- (BOOL)needDefaultActionWithContext:;
- (id)entryTextWithContext:;
- (void)trackMiniDetailTitleClickWithContext:;
- (unsigned long long)stableEntryStrategyWithContext:;
- (BOOL)hitStableExtendedConsumptionWithContext:;
- (id)editTextFont;
@end
