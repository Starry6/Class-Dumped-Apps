@interface MPMediaQuerySection : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) Q sectionIndexTitleIndex;
- (id)init;
- (void)setRange:;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)range;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)_init;
- (id)copyWithZone:;
- (unsigned long long)sectionIndexTitleIndex;
- (void)setSectionIndexTitleIndex:;
+ (BOOL)supportsSecureCoding;
@end
