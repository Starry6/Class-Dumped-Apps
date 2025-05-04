@interface AWEEcomSearchProfileSimpleExpression : AWEEcomSearchProfileExpression
@property (nonatomic) NSString firstTag;
@property (nonatomic) NSString lastTag;
- (id)firstTag;
- (void)setFirstTag:;
- (id)lastTag;
- (void)setLastTag:;
- (long long)execute:;
- (void).cxx_destruct;
@end
