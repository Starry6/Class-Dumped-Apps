@interface JUWritingDirectionsCounts : NSObject
@property (nonatomic) Q natural;
@property (nonatomic) Q leftToRight;
@property (nonatomic) Q rightToLeft;
@property (nonatomic) Q total;
@property (nonatomic) Q significantValues;
@property (nonatomic) BOOL hasStronglyTypedCounts;
@property (nonatomic) BOOL isRTLEnough;
@property (nonatomic) BOOL isRTLMinimal;
@property (nonatomic) NSString description;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)total;
- (BOOL)isEqual:;
- (unsigned long long)rightToLeft;
- (unsigned long long)leftToRight;
- (unsigned long long)natural;
- (unsigned long long)significantValues;
- (BOOL)hasStronglyTypedCounts;
- (BOOL)isRTLEnough;
- (BOOL)isRTLMinimal;
- (id)initWithNatural:leftToRight:rightToLeft:;
+ (id)add:to:;
+ (id)zero;
@end
