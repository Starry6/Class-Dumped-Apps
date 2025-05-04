@interface AWEHotSpotLynxStrokeLabel : LynxUI
@property (nonatomic) UILabel label;
@property (nonatomic) NSString text;
@property (nonatomic) q rank;
- (void)updateTextLabelWithRank:text:containerLabel:;
- (void)setText:requestReset:;
- (void)setRank:requestReset:;
- (void)setLabel:;
- (long long)rank;
- (id)text;
- (id)label;
- (void).cxx_destruct;
- (id)createView;
+ (void)registerStrokeLabel;
+ (id)__lynx_prop_config__660;
+ (id)__lynx_prop_config__731;
@end
