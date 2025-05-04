@interface AWEPLVCardDescBaseElement : NSObject
@property (nonatomic) double leftPaddingValue;
@property (nonatomic) double rightPaddingValue;
@property (nonatomic) double heightValue;
@property (nonatomic) double bottomPaddingValue;
@property (nonatomic) q elementType;
@property (nonatomic) @? leftPadding;
@property (nonatomic) @? rightPadding;
@property (nonatomic) @? height;
@property (nonatomic) @? bottomPadding;
- (void)applyView:;
- (void)setLeftPaddingValue:;
- (void)setRightPaddingValue:;
- (void)setBottomPaddingValue:;
- (double)leftPaddingValue;
- (double)rightPaddingValue;
- (double)bottomPaddingValue;
- (Class)viewClass;
- (id)height;
- (id)bottomPadding;
- (long long)elementType;
- (void)setElementType:;
- (void)setHeightValue:;
- (double)heightValue;
- (id)leftPadding;
- (id)rightPadding;
@end
