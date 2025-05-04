@interface AWEDuetShareChannel : AWEShareBaseChannel
@property (nonatomic) AWEAwemeModel refreshedAwemeModel;
@property (nonatomic) BOOL isDuetSing;
- (id)enterMethod;
- (BOOL)isChannelEnabledWithContext:;
- (id)shareImage;
- (BOOL)isDuetSing;
- (void)setIsDuetSing:;
- (void)shareItem:willAppear:;
- (BOOL)prepareToShare;
- (void)prepareToShareWithCompletion:;
- (BOOL)isShareItemEnabled;
- (id)aAWEShareServiceDOUYINHTSAdapter;
- (void)_beginDuet;
- (id)refreshedAwemeModel;
- (void)setRefreshedAwemeModel:;
- (BOOL)share;
- (void).cxx_destruct;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
+ (Class)aAWEShareServiceDOUYINHTSAdapterClass;
@end
