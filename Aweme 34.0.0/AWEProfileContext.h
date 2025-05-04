@interface AWEProfileContext : AWEPageContext
@property (nonatomic) AWEProfileServiceCenter serviceCenter;
@property (nonatomic) AWEProfileEventCenter eventCenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUserID;
- (id)enterMethod;
- (id)enterFrom;
- (id)commonParams;
- (id)eventCenter;
- (id)routerParam;
- (void)setEventCenter:;
- (id)enterAwemeModel;
- (id)eventCommonParamsHandler;
- (id)enterAwemeID;
- (BOOL)isFromHomePage;
- (id)enterUserModel;
- (id)userID;
- (id)init;
- (id)serviceCenter;
- (void).cxx_destruct;
- (void)setServiceCenter:;
- (BOOL)isCurrentUser;
- (id)enterType;
@end
