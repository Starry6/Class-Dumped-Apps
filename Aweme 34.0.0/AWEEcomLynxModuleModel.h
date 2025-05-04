@interface AWEEcomLynxModuleModel : MTLModel
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) NSString alignmentMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)leftMargin;
- (void)setHeight:;
- (void)setWidth:;
- (void)setLeftMargin:;
- (double)bottomMargin;
- (double)width;
- (void).cxx_destruct;
- (double)rightMargin;
- (double)height;
- (double)topMargin;
- (id)alignmentMode;
- (void)setAlignmentMode:;
- (void)setRightMargin:;
- (void)setBottomMargin:;
- (void)setTopMargin:;
+ (id)JSONKeyPathsByPropertyKey;
@end
