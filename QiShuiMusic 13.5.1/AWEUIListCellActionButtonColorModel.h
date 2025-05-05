@interface AWEUIListCellActionButtonColorModel : NSObject
@property (nonatomic) UIColor normalTitleColor;
@property (nonatomic) UIColor normalBgColor;
@property (nonatomic) UIColor normalBorderColor;
@property (nonatomic) UIColor attentionTitleColor;
@property (nonatomic) UIColor attentionBgColor;
@property (nonatomic) UIColor attentionBorderColor;
- (id)attentionBgColor;
- (id)attentionBorderColor;
- (id)attentionTitleColor;
- (id)normalBgColor;
- (id)normalBorderColor;
- (void)setAttentionBgColor:;
- (void)setAttentionBorderColor:;
- (void)setAttentionTitleColor:;
- (void)setNormalBgColor:;
- (void)setNormalBorderColor:;
- (void).cxx_destruct;
- (void)setNormalTitleColor:;
- (id)normalTitleColor;
@end
