@interface IESECShopGoodsTitleLabelLayoutConfig : NSObject
@property (nonatomic) double width;
@property (nonatomic) UIFont font;
@property (nonatomic) double tagTopOffset;
@property (nonatomic) double lineHeight;
@property (nonatomic) double lineSpace;
@property (nonatomic) double tagIconFixHeight;
- (double)lineSpace;
- (void)setLineSpace:;
- (void)setTagIconFixHeight:;
- (void)setTagTopOffset:;
- (double)tagIconFixHeight;
- (double)tagTopOffset;
- (id)init;
- (void)setFont:;
- (void)setWidth:;
- (double)width;
- (void).cxx_destruct;
- (id)font;
- (double)lineHeight;
- (void)setLineHeight:;
@end
