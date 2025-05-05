@interface PHAnimatedImageRequestOptions : PHImageRequestOptions
@property (nonatomic) BOOL allowPreCaching;
@property (nonatomic) BOOL useSharedImageDecoding;
- (id)init;
- (BOOL)useSharedImageDecoding;
- (void)setAllowPreCaching:;
- (BOOL)allowPreCaching;
- (id)copyWithZone:;
- (void)setUseSharedImageDecoding:;
@end
