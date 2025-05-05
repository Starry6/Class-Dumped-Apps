@interface VEGeometryDesc : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSInteger size;
@property (nonatomic) r^f data;
- (id)initGeometryType:data:size:;
- (id)data;
- (long long)type;
- (int)size;
@end
