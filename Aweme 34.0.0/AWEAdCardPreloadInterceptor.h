@interface AWEAdCardPreloadInterceptor : IESFalconGurdInterceptor
@property (nonatomic) BOOL enable;
- (id)falconMetaDataForURLRequest:;
- (BOOL)enable;
- (id)init;
- (void)setEnable:;
@end
