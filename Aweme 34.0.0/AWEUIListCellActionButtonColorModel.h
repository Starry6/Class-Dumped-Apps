@interface AWEUIListCellActionButtonColorModel : NSObject
@property (nonatomic) UIColor normalTitleColor;
@property (nonatomic) UIColor normalBgColor;
@property (nonatomic) UIColor normalBorderColor;
@property (nonatomic) UIColor attentionTitleColor;
@property (nonatomic) UIColor attentionBgColor;
@property (nonatomic) UIColor attentionBorderColor;
- (void)setAttentionTitleColor:;
- (void)setAttentionBgColor:;
- (void)setAttentionBorderColor:;
- (void)setNormalBgColor:;
- (void)setNormalBorderColor:;
- (id)attentionTitleColor;
- (id)attentionBgColor;
- (id)attentionBorderColor;
- (id)normalBgColor;
- (id)normalBorderColor;
- (void).cxx_destruct;
- (id)normalTitleColor;
- (void)setNormalTitleColor:;
@end
