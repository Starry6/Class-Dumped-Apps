@interface IESLiveVideoGiftMaskDataModel : NSObject
@property (nonatomic) q index;
@property (nonatomic) NSString tag;
@property (nonatomic) q sourceType;
@property (nonatomic) q fitType;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} sourceRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} maskRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} renderMaskRect;
@property (nonatomic) q sameCount;
- (id)renderMaskRect;
- (long long)sameCount;
- (void)setMaskRect:;
- (void)setRenderMaskRect:;
- (void)setSameCount:;
- (id)sourceRect;
- (void)setSourceRect:;
- (id)tag;
- (long long)sourceType;
- (void)setSourceType:;
- (long long)index;
- (void)setTag:;
- (void)setIndex:;
- (void).cxx_destruct;
- (long long)fitType;
- (id)maskRect;
- (void)setFitType:;
@end
