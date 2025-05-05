@interface LPPadding : NSObject
@property (nonatomic) LPPointUnit top;
@property (nonatomic) LPPointUnit leading;
@property (nonatomic) LPPointUnit bottom;
@property (nonatomic) LPPointUnit trailing;
- (id)init;
- (id)top;
- (void)setTop:;
- (void).cxx_destruct;
- (id)bottom;
- (void)setBottom:;
- (id)trailing;
- (id)leading;
- (id)copyWithZone:;
- (id)_lp_CSSText;
- (id)asInsetsForLTR:;
- (void)setLeading:;
- (void)setTrailing:;
@end
