@interface AWEFantaInteractionModel : NSObject
@property (nonatomic) NSString playInteractionName;
@property (nonatomic) q count;
@property (nonatomic) NSString referString;
- (id)referString;
- (void)setReferString:;
- (id)playInteractionName;
- (void)setPlayInteractionName:;
- (id)init;
- (void)setCount:;
- (void)encodeWithCoder:;
- (long long)count;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)copyWithZone:;
@end
