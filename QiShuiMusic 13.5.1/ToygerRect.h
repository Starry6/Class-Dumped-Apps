@interface ToygerRect : ToygerBaseModel
@property (nonatomic) q left;
@property (nonatomic) q top;
@property (nonatomic) q right;
@property (nonatomic) q bottom;
- (id)init;
- (long long)top;
- (void)setTop:;
- (long long)left;
- (long long)bottom;
- (long long)right;
- (void)setBottom:;
- (id)copyWithZone:;
- (void)setLeft:;
- (void)setRight:;
@end
