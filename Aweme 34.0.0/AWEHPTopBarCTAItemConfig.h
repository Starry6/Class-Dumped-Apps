@interface AWEHPTopBarCTAItemConfig : MTLModel
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLeftPadding:;
- (void)setRightPadding:;
- (double)leftMargin;
- (void)setLeftMargin:;
- (double)rightMargin;
- (void)setRightMargin:;
- (double)leftPadding;
- (double)rightPadding;
+ (id)JSONKeyPathsByPropertyKey;
@end
