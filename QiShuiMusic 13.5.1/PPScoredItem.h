@interface PPScoredItem : NSObject
@property (nonatomic) S resultPosition;
@property (nonatomic) S resultCount;
@property (nonatomic) NSObject<NSCopying><NSSecureCoding> item;
@property (nonatomic) double score;
- (id)item;
- (double)score;
- (id)initWithCoder:;
- (unsigned short)resultCount;
- (unsigned long long)hash;
- (unsigned short)resultPosition;
- (BOOL)isEqualToScoredItem:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithItem:score:resultPosition:resultCount:;
- (BOOL)isEqual:;
- (id)initWithItem:score:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
