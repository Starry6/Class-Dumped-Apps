@interface AWEEnterpriseProfileTabConfiguration : NSObject
@property (nonatomic) AWEUserModel targetUser;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSDictionary queryDict;
@property (nonatomic) NSDictionary globalProps;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) BOOL fromHome;
@property (nonatomic) <AWEUserProfileTabVCDelegate> delegate;
@property (nonatomic) Q profileTabStyle;
@property (nonatomic) NSString tabName;
@property (nonatomic) NSDictionary commonTrackDict;
@property (nonatomic) BOOL showTipView;
@property (nonatomic) NSString tipViewText;
@property (nonatomic) NSString tipViewTitle;
@property (nonatomic) NSString tipViewSchema;
@property (nonatomic) @? containerWidth;
@property (nonatomic) BOOL isPadSplitScreen;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setEnterMethod:;
- (void)setReferString:;
- (id)enterMethod;
- (id)globalProps;
- (void)setGlobalProps:;
- (void)setCommonTrackDict:;
- (void)setTargetUser:;
- (id)queryDict;
- (void)setQueryDict:;
- (BOOL)fromHome;
- (void)setFromHome:;
- (unsigned long long)profileTabStyle;
- (void)setProfileTabStyle:;
- (id)commonTrackDict;
- (BOOL)showTipView;
- (void)setShowTipView:;
- (id)tipViewText;
- (void)setTipViewText:;
- (id)tipViewTitle;
- (void)setTipViewTitle:;
- (id)tipViewSchema;
- (void)setTipViewSchema:;
- (BOOL)isPadSplitScreen;
- (void)setIsPadSplitScreen:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)tabName;
- (void)setTabName:;
- (id)containerWidth;
- (void)setContainerWidth:;
- (id)targetUser;
@end
