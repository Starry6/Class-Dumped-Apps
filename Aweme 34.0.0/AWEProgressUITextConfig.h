@interface AWEProgressUITextConfig : NSObject
@property (nonatomic) UIFont textFont;
@property (nonatomic) AWEProgressUIColorConfig textColorConfig;
@property (nonatomic) q textAlignment;
@property (nonatomic) NSShadow textShadow;
- (id)textColorConfig;
- (void)setTextColorConfig:;
- (id)textFont;
- (void).cxx_destruct;
- (void)setTextAlignment:;
- (long long)textAlignment;
- (void)setTextFont:;
- (id)textShadow;
- (void)setTextShadow:;
+ (id)textConfigWithFont:textColorConfig:textAlignment:shadow:;
@end
