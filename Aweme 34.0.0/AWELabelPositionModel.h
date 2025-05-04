@interface AWELabelPositionModel : MTLModel
@property (nonatomic) Q drawPosition;
@property (nonatomic) Q outflowPosition;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)drawPosition;
- (void)setDrawPosition:;
- (unsigned long long)outflowPosition;
- (void)setOutflowPosition:;
+ (id)JSONKeyPathsByPropertyKey;
@end
