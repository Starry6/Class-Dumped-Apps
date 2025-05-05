@interface WBSSingleCreditCardData : NSObject
@property (nonatomic) @ value;
@property (nonatomic) q type;
@property (nonatomic) BOOL isCardFromWallet;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)value;
- (id)initWithValue:type:;
- (BOOL)isCardFromWallet;
- (void)setIsCardFromWallet:;
+ (BOOL)supportsSecureCoding;
@end
