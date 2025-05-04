@interface AWESplashBreathExpandModel : MTLModel
@property (nonatomic) q top;
@property (nonatomic) q left;
@property (nonatomic) q bottom;
@property (nonatomic) q right;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)top;
- (void)setBottom:;
- (long long)right;
- (void)setTop:;
- (long long)left;
- (long long)bottom;
- (void)setLeft:;
- (void)setRight:;
+ (id)JSONKeyPathsByPropertyKey;
@end
