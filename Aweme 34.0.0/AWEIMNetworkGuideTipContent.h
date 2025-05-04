@interface AWEIMNetworkGuideTipContent : NSObject
@property (nonatomic) NSString content;
@property (nonatomic) q fontSize;
@property (nonatomic) BOOL isBold;
@property (nonatomic) NSAttributedString attrStr;
- (id)attrStr;
- (void)setAttrStr:;
- (id)makeAttrStr;
- (id)content;
- (long long)fontSize;
- (BOOL)isBold;
- (void)setFontSize:;
- (void)setContent:;
- (void).cxx_destruct;
- (id)initWithDict:;
- (void)setIsBold:;
@end
