@interface AWECommentEvaluationRichContentElementEntranceConfig : NSObject
@property (nonatomic) BOOL enableImage;
@property (nonatomic) BOOL enableAt;
@property (nonatomic) BOOL enableEmoji;
- (void)setEnableAt:;
- (void)setEnableEmoji:;
- (void)setEnableImage:;
- (BOOL)enableEmoji;
- (BOOL)enableImage;
- (BOOL)enableAt;
@end
