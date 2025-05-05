@interface NSTextRange : NSObject
@property (nonatomic) BOOL empty;
@property (nonatomic) <NSTextLocation> location;
@property (nonatomic) <NSTextLocation> endLocation;
- (id)terminator;
- (id)initWithLocation:;
- (BOOL)containsRange:;
- (BOOL)isEqualToTextRange:;
- (id)endLocation;
- (id)initWithLocation:endLocation:;
- (BOOL)intersectsWithTextRange:;
- (BOOL)containsLocation:;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)debugDescription;
- (id)location;
- (id)textRangeByFormingUnionWithTextRange:;
- (id)textRangeByIntersectingWithTextRange:;
- (id)description;
- (BOOL)isEqual:;
+ (id)combineTextRanges:withTextRanges:usingOperator:;
@end
