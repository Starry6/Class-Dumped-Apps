@interface AWEUserLoginButtonModel : NSObject
@property (nonatomic) NSString successTitle;
@property (nonatomic) NSString normalTitle;
@property (nonatomic) NSString loadingTitle;
@property (nonatomic) AWELoginButtonTagModel tagModel;
@property (nonatomic) BOOL shouldEnlargeButton;
@property (nonatomic) BOOL shouldShowNewLoading;
@property (nonatomic) BOOL shouldDisableSweep;
- (void)setNormalTitle:;
- (id)normalTitle;
- (void)setTagModel:;
- (id)tagModel;
- (BOOL)shouldShowNewLoading;
- (void)setShouldShowNewLoading:;
- (id)initWithNormalTitle:loadingTitle:successTitle:tagModel:;
- (void)setShouldEnlargeButton:;
- (void)setShouldDisableSweep:;
- (BOOL)shouldEnlargeButton;
- (BOOL)shouldDisableSweep;
- (void).cxx_destruct;
- (void)setSuccessTitle:;
- (id)successTitle;
- (id)loadingTitle;
- (void)setLoadingTitle:;
@end
