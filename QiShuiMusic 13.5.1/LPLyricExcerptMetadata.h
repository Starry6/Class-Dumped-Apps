@interface LPLyricExcerptMetadata : NSObject
@property (nonatomic) NSString lyrics;
@property (nonatomic) NSString language;
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSNumber endTime;
- (void)setLanguage:;
- (id)language;
- (void)setStartTime:;
- (void)setLyrics:;
- (void)setEndTime:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)startTime;
- (id)endTime;
- (void)encodeWithCoder:;
- (id)lyrics;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
