@interface AWEPlayInteractionDescriptionDefaultTruncationBuild : NSObject
@property (nonatomic) AWEPlayInteractionDescriptionContext parserContext;
- (id)createPlainTextTailLabelWithAttributedText:;
- (id)expandTagFont;
- (id)getDotsTruncationExtraModel;
- (id)getSpaceTruncationExtraModel;
- (id)getMoreTruncationExtraModel:;
- (id)getTailSpaceTruncationExtraModel;
- (id)getEditTruncationExtraModel;
- (id)entryTextWithContext:;
- (unsigned long long)stableEntryStrategyWithContext:;
- (BOOL)hitStableExtendedConsumptionWithContext:;
- (id)editTextFont;
- (BOOL)shouldShowReeditTipWithContext:;
- (id)getSpaceTruncationExtraModelWithWidth:;
- (id)moreString;
- (BOOL)canEnterRelatedSinglePanelWithContext:;
- (BOOL)canEnterMaskLayerWithContext:;
- (void).cxx_destruct;
- (id)parserContext;
- (void)setParserContext:;
+ (id)defaultTruncationBuildWithWithContext:;
+ (unsigned long long)entryTextType;
@end
