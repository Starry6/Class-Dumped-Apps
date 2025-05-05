@interface CSJPlayableVideoInfo : CSJVideoInfo
@property (nonatomic) Q direction;
- (unsigned long long)direction;
- (void)setDirection:;
- (id)initWithDictionary:error:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
@end
