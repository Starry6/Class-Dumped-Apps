@interface CSJAdCallActionManager : NSObject
@property (nonatomic) CSJAdCallListenModel listenInfoModel;
@property (nonatomic) CTCallCenter callCenter;
- (id)listenInfoModel;
- (void)callAdModel:;
- (void)callStatus:WithIsWeb:;
- (BOOL)handelActionWithModel:WithIsWebPage:context:;
- (void)handelActionWithModel:context:;
- (void)listenCall:source:;
- (void)setListenInfoModel:;
- (void)startCallListener;
- (void)trackCallAdLabel:;
- (id)callCenter;
- (void)setCallCenter:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
