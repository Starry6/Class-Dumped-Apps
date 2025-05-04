@interface AWEUGEvadeVideoContentServiceImpl : HTSService
@property (nonatomic) NSString evadeReason;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterQuitFromLandscapeFeedNotification;
- (void)setEvadeReason:;
- (id)evadeReason;
- (void)beforeEnterToLandscapeFeedNotification;
- (BOOL)checkIfInWhiteListWithAwemeModel:allowedTypeList:;
- (id)getEvadeReason;
- (id)init;
- (void).cxx_destruct;
- (void)setIsLandscape:;
- (BOOL)isLandscape;
@end
