@interface TTVideoEngineVideoStyle : NSObject
@property (nonatomic) q videoStyle;
@property (nonatomic) q dimension;
@property (nonatomic) q projectionModel;
@property (nonatomic) q viewSize;
- (long long)projectionModel;
- (void)setProjectionModel:;
- (void)setVideoStyle:;
- (long long)videoStyle;
- (void)setDimension:;
- (long long)dimension;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (long long)viewSize;
- (void)encodeWithCoder:;
- (id)description;
- (void)setViewSize:;
+ (BOOL)supportsSecureCoding;
@end
