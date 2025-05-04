@interface AWEPostPagePaymentHandler : NSObject
@property (nonatomic) BOOL paymentEnableState;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindServices:;
- (BOOL)paymentEnableState;
- (void)setPaymentEnableState:;
- (void).cxx_destruct;
- (id)context;
+ (void)_aweLazyRegisterPostPage;
@end
