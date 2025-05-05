@interface ByteRTCVideoSourceConfig : NSObject
@property (nonatomic) q sourceType;
@property (nonatomic) Q contentCategory;
- (unsigned long long)contentCategory;
- (void)setContentCategory:;
- (id)init;
- (long long)sourceType;
- (void)setSourceType:;
@end
