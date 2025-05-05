@interface IESLiveSaaSByteCastURLInfo : NSObject
@property (nonatomic) NSString resolutionName;
@property (nonatomic) NSString resolutionKey;
@property (nonatomic) NSString url;
@property (nonatomic) q width;
@property (nonatomic) q height;
- (id)resolutionKey;
- (id)resolutionName;
- (void)setResolutionKey:;
- (void)setResolutionName:;
- (id)url;
- (void)setWidth:;
- (void)setUrl:;
- (long long)height;
- (long long)width;
- (void)setHeight:;
- (void).cxx_destruct;
@end
