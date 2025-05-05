@interface WKFindConfiguration : NSObject
@property (nonatomic) BOOL backwards;
@property (nonatomic) BOOL caseSensitive;
@property (nonatomic) BOOL wraps;
- (id)init;
- (BOOL)caseSensitive;
- (id)copyWithZone:;
- (void)setCaseSensitive:;
- (BOOL)wraps;
- (void)setWraps:;
- (BOOL)backwards;
- (void)setBackwards:;
@end
