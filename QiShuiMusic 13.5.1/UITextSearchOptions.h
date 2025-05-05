@interface UITextSearchOptions : NSObject
@property (nonatomic) Q stringCompareOptions;
@property (nonatomic) q wordMatchMethod;
- (BOOL)isEqual:;
- (unsigned long long)stringCompareOptions;
- (void)setStringCompareOptions:;
- (long long)wordMatchMethod;
- (void)setWordMatchMethod:;
+ (id)defaultSearchOptions;
@end
