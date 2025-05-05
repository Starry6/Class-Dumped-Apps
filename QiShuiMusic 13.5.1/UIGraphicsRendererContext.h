@interface UIGraphicsRendererContext : NSObject
@property (nonatomic) BOOL __createsImages;
@property (nonatomic) ^{CGContext=} CGContext;
@property (nonatomic) UIGraphicsRendererFormat format;
- (void)dealloc;
- (id)format;
- (void)strokeRect:;
- (void)fillRect:blendMode:;
- (void)set__createsImages:;
- (void)clipToRect:;
- (void)fillRect:;
- (void).cxx_destruct;
- (BOOL)__createsImages;
- (id)CGContext;
- (id)initWithCGContext:format:;
- (void)strokeRect:blendMode:;
@end
