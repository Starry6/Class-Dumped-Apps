@interface AWEPOILocationServiceBarLocationAuthorizationReqConfig : NSObject
@property (nonatomic) NSString contentText;
@property (nonatomic) NSString actionText;
@property (nonatomic) q bottomOffset;
@property (nonatomic) q dismissTime;
- (long long)dismissTime;
- (void)setDismissTime:;
- (id)initWithContentText:actionText:bottomOffset:dismissTime:;
- (void).cxx_destruct;
- (void)setContentText:;
- (id)contentText;
- (id)actionText;
- (void)setActionText:;
- (long long)bottomOffset;
- (void)setBottomOffset:;
@end
