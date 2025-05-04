@interface AWELivePushOpenStatusServiceImpl : NSObject
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)changePushOpenStatus:uid:secUid:nickName:scene:completion:;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)changePushOpenStatusWithUrl:params:completion:;
- (void)changePushOpenStatusWithUrl:params:delay:completion:;
- (void)handleApiResultWithPushStatus:error:completion:;
@end
