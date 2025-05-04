@interface AWEGuestHomeHeaderSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEGuestHomePageContext pageContext;
@property (nonatomic) AWEGuestHomeHeaderModel headerModel;
@property (nonatomic) NSString translatedFollowingCount;
@property (nonatomic) BOOL fetchSuccessFlag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchSectionData;
- (void)guestDidFinishFollowUser:isUnfollow:;
- (BOOL)fetchSuccessFlag;
- (void)calculateFollowingCount;
- (void)setTranslatedFollowingCount:;
- (void)setFetchSuccessFlag:;
- (id)translatedFollowingCount;
- (void)dealloc;
- (void)setup;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
- (void)setHeaderModel:;
- (id)headerModel;
+ (id)viewModelWithModelsArray:pageContext:;
@end
