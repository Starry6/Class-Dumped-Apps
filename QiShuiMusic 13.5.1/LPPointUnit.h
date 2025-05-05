@interface LPPointUnit : NSObject
@property (nonatomic) double value;
- (double)value;
- (id)initWithValue:;
- (id)_lp_CSSText;
- (id)_lp_HTMLAttributeText;
+ (id)zero;
@end
