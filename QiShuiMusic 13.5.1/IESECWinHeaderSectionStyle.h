@interface IESECWinHeaderSectionStyle : MTLModel
@property (nonatomic) double marginTop;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginBottom;
@property (nonatomic) double marginRight;
@property (nonatomic) {UIEdgeInsets=dddd} edge;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEdge:;
- (id)edge;
- (double)marginTop;
- (void)setMarginTop:;
- (id)initWithEdge:;
- (double)marginRight;
- (void)setMarginRight:;
- (double)marginBottom;
- (void)setMarginBottom:;
- (double)marginLeft;
- (void)setMarginLeft:;
+ (id)JSONKeyPathsByPropertyKey;
@end
