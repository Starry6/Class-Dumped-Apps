@interface WebAccessibilityTextMarker : NSObject
- (id)description;
- (BOOL)isIgnored;
- (id).cxx_construct;
- (id)dataRepresentation;
- (id)initWithData:cache:;
- (id)initWithTextMarker:cache:;
- (id)initWithData:accessibilityObject:;
- (id)visiblePosition;
- (id)characterOffset;
- (id)accessibilityObject;
+ (id)textMarkerWithVisiblePosition:cache:;
+ (id)textMarkerWithCharacterOffset:cache:;
+ (id)startOrEndTextMarkerForRange:isStart:cache:;
@end
