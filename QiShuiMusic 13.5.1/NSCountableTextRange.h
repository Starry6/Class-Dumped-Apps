@interface NSCountableTextRange : NSTextRange
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) NSCountableTextLocation location;
@property (nonatomic) NSCountableTextLocation endLocation;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL endingAtEOD;
- (BOOL)isEqualToTextRange:;
- (id)initWithLocation:endLocation:;
- (BOOL)intersectsWithTextRange:;
- (BOOL)containsLocation:;
- (BOOL)isEmpty;
- (unsigned long long)hash;
- (id)initWithRange:;
- (id)debugDescription;
- (id)textRangeByFormingUnionWithTextRange:;
- (id)range;
- (id)type;
- (id)textRangeByIntersectingWithTextRange:;
- (BOOL)isEndingAtEOD;
+ (id)documentRange;
+ (BOOL)isBaseClassTestingMode;
+ (void)setBaseClassTestingMode:;
@end
