@interface WKTextSelectionRect : UITextSelectionRect
- (BOOL)isVertical;
- (id)_path;
- (id)rect;
- (id)range;
- (id)initWithCGRect:;
- (id).cxx_construct;
- (BOOL)containsStart;
- (BOOL)containsEnd;
- (long long)writingDirection;
- (id)_customHandleInfo;
- (id)initWithSelectionGeometry:scaleFactor:;
@end
