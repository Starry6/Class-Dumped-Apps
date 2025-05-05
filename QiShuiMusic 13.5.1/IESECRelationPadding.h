@interface IESECRelationPadding : MTLModel
@property (nonatomic) double left;
@property (nonatomic) double right;
@property (nonatomic) double top;
@property (nonatomic) double bottom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)top;
- (void)setTop:;
- (double)left;
- (double)bottom;
- (double)right;
- (void)setBottom:;
- (id)copyWithZone:;
- (void)setLeft:;
- (void)setRight:;
+ (id)JSONKeyPathsByPropertyKey;
@end
