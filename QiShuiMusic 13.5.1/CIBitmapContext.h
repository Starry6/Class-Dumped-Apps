@interface CIBitmapContext : CIContext
- (id)init;
- (void)dealloc;
- (id)initWithOptions:;
- (id)bounds;
- (id)initWithBitmap:rowBytes:bounds:format:;
- (id)initWithBitmap:rowBytes:bounds:format:options:;
- (BOOL)setBitmap:rowBytes:bounds:format:;
- (void)drawImage:inRect:fromRect:;
+ (id)context;
+ (id)contextWithOptions:;
+ (id)contextWithBitmap:rowBytes:bounds:format:;
+ (id)contextWithBitmap:rowBytes:bounds:format:options:;
@end
