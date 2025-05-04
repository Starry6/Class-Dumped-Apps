@interface AWEVideoCoverTextTabContext : NSObject
@property (nonatomic) AWEVideoCoverRecommendTextDataLoader textLoader;
@property (nonatomic) AWEVideoCoverFontDataLoader fontLoader;
@property (nonatomic) BOOL isFontStyleDisable;
@property (nonatomic) BOOL isShowHistory;
- (void)setTextLoader:;
- (id)textLoader;
- (BOOL)isFontStyleDisable;
- (void)setIsFontStyleDisable:;
- (BOOL)isShowHistory;
- (void)setIsShowHistory:;
- (void).cxx_destruct;
- (id)fontLoader;
- (void)setFontLoader:;
@end
