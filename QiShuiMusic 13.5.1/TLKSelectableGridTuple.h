@interface TLKSelectableGridTuple : TLKObject
@property (nonatomic) double size;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)subtitle;
- (void)setSize:;
- (double)size;
+ (id)tupleWithTitle:subtitle:;
+ (id)tuplesForTitles:subtitles:;
@end
