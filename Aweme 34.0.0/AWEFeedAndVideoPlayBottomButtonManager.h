@interface AWEFeedAndVideoPlayBottomButtonManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackFeedButtonClickWithModel:businessID:enterMethod:isTemplateButton:referstring:;
- (void)trackFeedButtonShowWithModel:businessID:isTemplateButton:referstring:;
- (BOOL)reverseTokenForBottomButtonInFeedWithReferstring:businessID:awemeModel:;
- (id)feedButtonManagerPageList;
- (void)trackFeedButtonShowWithModel:businessID:isTemplateButton:referstring:logExtra:;
- (void)trackFeedButtonClickWithModel:businessID:enterMethod:isTemplateButton:referstring:logExtra:;
- (BOOL)reverseTokenForBottomButtonInFeedWithReferstring:btnName:businessID:awemeModel:;
- (BOOL)reverseEnable;
- (BOOL)reverseFromRecommend:businessID:btnName:;
- (id)getTemplateButtonABExemptionList;
- (id)getTemplateButtonRecommendExemptionList;
- (id)getReverseBlackList;
- (id)getReverseConfig;
- (id)defaultBlackList;
- (BOOL)recommendReverseUnable;
- (id)btnTrackInfoFromButtonID:;
- (void)trackFeedButtonDislikeClickWithModel:businessID:enterMethod:isTemplateButton:referstring:logExtra:;
- (BOOL)shouldOfflineButtonWithBusinessID:context:;
- (void)trackFeedButtonDislikeClickWithModel:businessID:enterMethod:isTemplateButton:referstring:;
- (BOOL)reverseFromRecommend:businessID:;
+ (id)sharedManager;
@end
