@interface YYTextRunGlyphRange : NSObject
@property (nonatomic) {_NSRange=QQ} glyphRangeInRun;
@property (nonatomic) Q drawMode;
- (id)glyphRangeInRun;
- (void)setGlyphRangeInRun:;
- (unsigned long long)drawMode;
- (void)setDrawMode:;
+ (id)rangeWithRange:drawMode:;
@end
