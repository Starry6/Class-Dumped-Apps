@interface ASCAppOfferStateDelegateProxy : NSObject
@property (nonatomic) <ASCAppOfferStateDelegate> target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTarget:;
- (void).cxx_destruct;
- (id)target;
- (void)offer:didChangeState:withMetadata:flags:;
- (void)offer:didChangeStatusText:;
@end
