@interface CSJSDGraphicsImageRendererFormat : NSObject
@property (nonatomic) UIGraphicsImageRendererFormat uiformat;
@property (nonatomic) double scale;
@property (nonatomic) BOOL opaque;
@property (nonatomic) q preferredRange;
- (id)initForMainScreen;
- (void)setUiformat:;
- (id)uiformat;
- (id)init;
- (void)setScale:;
- (BOOL)opaque;
- (void)setPreferredRange:;
- (void).cxx_destruct;
- (long long)preferredRange;
- (void)setOpaque:;
- (double)scale;
+ (id)preferredFormat;
@end
