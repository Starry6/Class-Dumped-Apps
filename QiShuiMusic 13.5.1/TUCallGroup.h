@interface TUCallGroup : NSObject
@property (nonatomic) NSArray calls;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString displayName;
- (id)methodSignatureForSelector:;
- (unsigned long long)hash;
- (id)displayName;
- (void).cxx_destruct;
- (id)description;
- (int)status;
- (void)forwardInvocation:;
- (id)calls;
- (id)initWithCalls:;
- (BOOL)isEqual:;
- (id)initWithCall:;
- (BOOL)isEqualToCallGroup:;
@end
