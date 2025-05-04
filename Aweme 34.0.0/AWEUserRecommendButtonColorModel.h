@interface AWEUserRecommendButtonColorModel : NSObject
@property (nonatomic) UIColor attentionTitleColor;
@property (nonatomic) UIColor attentionBackgroundColor;
@property (nonatomic) UIColor attentionBorderColor;
@property (nonatomic) UIColor normalTitleColor;
@property (nonatomic) UIColor normalBackgroundColor;
@property (nonatomic) UIColor normalBorderColor;
- (void)setAttentionTitleColor:;
- (void)setAttentionBorderColor:;
- (void)setNormalBorderColor:;
- (id)attentionTitleColor;
- (id)attentionBorderColor;
- (id)normalBorderColor;
- (id)attentionBackgroundColor;
- (void)setAttentionBackgroundColor:;
- (id)init;
- (id)normalBackgroundColor;
- (void).cxx_destruct;
- (id)normalTitleColor;
- (void)setNormalBackgroundColor:;
- (void)setNormalTitleColor:;
@end
