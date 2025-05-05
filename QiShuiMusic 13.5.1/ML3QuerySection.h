@interface ML3QuerySection : NSObject
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) Q sectionIndex;
- (void)setRange:;
- (unsigned long long)hash;
- (id)range;
- (id)description;
- (BOOL)isEqual:;
- (unsigned long long)sectionIndex;
- (void)setSectionIndex:;
- (id)initWithRange:sectionIndex:;
@end
