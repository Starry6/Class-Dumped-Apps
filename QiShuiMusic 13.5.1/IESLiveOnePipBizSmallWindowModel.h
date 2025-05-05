@interface IESLiveOnePipBizSmallWindowModel : IESLiveOnePipBaseModel
@property (nonatomic) Q showOriginType;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSDictionary preferOptions;
@property (nonatomic) @? showCompletion;
- (void)setExtraParams:;
- (id)extraParams;
- (id)preferOptions;
- (void)setPreferOptions:;
- (void)setShowCompletion:;
- (void)setShowOriginType:;
- (id)showCompletion;
- (unsigned long long)showOriginType;
- (void)setViewController:;
- (id)viewController;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
@end
