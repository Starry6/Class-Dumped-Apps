@interface AWEIMDarenCustomerPlatformInteractor : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (BOOL)enableSendGoodsWithConversation:;
- (BOOL)enableSendOrdersWithConversation:;
- (void)onTapSendGoodsOrOrdersWithConversation:type:;
- (void)p_trackSendGoodsOrOrdersClickWithConversation:type:;
+ (BOOL)canCreateComponentWithContext:;
+ (id)sharedInstance;
@end
