@interface PLEditSource : NSObject
@property (nonatomic) NUResolvedSource resolvedSource;
@property (nonatomic) NUSource source;
@property (nonatomic) q mediaType;
@property (nonatomic) BOOL isRAWSource;
- (long long)mediaType;
- (void).cxx_destruct;
- (id)source;
- (id)description;
- (void)setIdentifier:;
- (id)initWithResolvedSource:mediaType:;
- (void)setResolvedSource:mediaType:;
- (BOOL)isRAWSource;
- (id)resolvedSource;
@end
