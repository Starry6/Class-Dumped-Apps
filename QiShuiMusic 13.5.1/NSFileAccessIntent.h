@interface NSFileAccessIntent : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) BOOL isRead;
@property (nonatomic) Q readingOptions;
@property (nonatomic) Q writingOptions;
- (void)dealloc;
- (unsigned long long)writingOptions;
- (BOOL)isRead;
- (id)description;
- (unsigned long long)readingOptions;
- (void)setURL:;
- (id)URL;
+ (id)readingIntentWithURL:options:;
+ (id)writingIntentWithURL:options:;
@end
