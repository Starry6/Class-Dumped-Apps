@interface AWEMVCardCellElementUIConfig : NSObject
@property (nonatomic) double leftSpace;
@property (nonatomic) double rightSpace;
@property (nonatomic) double topExtraSpace;
@property (nonatomic) double bottomExtraSpace;
@property (nonatomic) Q fontSize;
@property (nonatomic) q fontWeight;
- (void)setRightSpace:;
- (double)rightSpace;
- (double)leftSpace;
- (void)setLeftSpace:;
- (double)bottomExtraSpace;
- (void)setTopExtraSpace:;
- (void)setBottomExtraSpace:;
- (double)topExtraSpace;
- (unsigned long long)fontSize;
- (void)setFontSize:;
- (long long)fontWeight;
- (void)setFontWeight:;
@end
