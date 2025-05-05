@interface IESLiveInteractApplyPaidLinkParams : NSObject
@property (nonatomic) BOOL isPaid;
@property (nonatomic) NSString clickSource;
@property (nonatomic) BOOL isFromPaidLinkmic;
@property (nonatomic) NSNumber linkPaidCount;
@property (nonatomic) NSNumber linkLimitTime;
@property (nonatomic) NSNumber discountMode;
@property (nonatomic) NSNumber discountAmount;
@property (nonatomic) NSString discountText;
- (void)setClickSource:;
- (id)clickSource;
- (id)discountAmount;
- (id)discountMode;
- (id)discountText;
- (BOOL)isFromPaidLinkmic;
- (id)linkLimitTime;
- (id)linkPaidCount;
- (void)setDiscountAmount:;
- (void)setDiscountMode:;
- (void)setDiscountText:;
- (void)setIsFromPaidLinkmic:;
- (void)setLinkLimitTime:;
- (void)setLinkPaidCount:;
- (BOOL)isPaid;
- (void).cxx_destruct;
@end
