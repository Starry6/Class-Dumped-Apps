@interface AWEProfileBrandVideoBannerViewModel : NSObject
@property (nonatomic) AWEUserModel user;
@property (nonatomic) NSString creativeID;
@property (nonatomic) NSString pullText;
@property (nonatomic) BOOL isCurrentUser;
- (void)setCreativeID:;
- (void)configAwemeModel:;
- (id)pullText;
- (void)_processData;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
- (BOOL)isCurrentUser;
- (id)initWithUserData:;
- (id)creativeID;
+ (id)viewModelWithData:;
@end
