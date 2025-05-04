@interface AWEIMNetworkGuideTipLine : NSObject
@property (nonatomic) NSArray contents;
@property (nonatomic) q topMargin;
@property (nonatomic) q bottomMargin;
@property (nonatomic) NSAttributedString attrStr;
- (id)attrStr;
- (void)setAttrStr:;
- (id)makeAttributedString;
- (double)computeLineHeight:;
- (void)setContents:;
- (id)contents;
- (long long)bottomMargin;
- (void).cxx_destruct;
- (id)initWithDict:;
- (long long)topMargin;
- (void)setBottomMargin:;
- (void)setTopMargin:;
@end
