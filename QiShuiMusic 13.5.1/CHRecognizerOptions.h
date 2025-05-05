@interface CHRecognizerOptions : NSObject
@property (nonatomic) BOOL enableCachingIfAvailable;
@property (nonatomic) BOOL enableGen2ModelIfAvailable;
@property (nonatomic) BOOL enableGen2CharacterLMIfAvailable;
- (id)init;
- (BOOL)enableCachingIfAvailable;
- (void)setEnableCachingIfAvailable:;
- (BOOL)enableGen2ModelIfAvailable;
- (void)setEnableGen2ModelIfAvailable:;
- (BOOL)enableGen2CharacterLMIfAvailable;
- (void)setEnableGen2CharacterLMIfAvailable:;
@end
