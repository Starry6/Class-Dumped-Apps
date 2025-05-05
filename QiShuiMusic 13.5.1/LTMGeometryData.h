@interface LTMGeometryData : NSObject
@property (nonatomic) I inputTextureDownsampleRatio;
@property (nonatomic) {CGSize=dd} inputTextureSize;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} sourceRect;
- (id)sourceRect;
- (id)cropRect;
- (id)inputTextureSize;
- (id)initWithInputTextureWidth:height:;
- (void)setCropRect:sourceRect:;
- (unsigned int)inputTextureDownsampleRatio;
- (void)setInputTextureDownsampleRatio:;
@end
