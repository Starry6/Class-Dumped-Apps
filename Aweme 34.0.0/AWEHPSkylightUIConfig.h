@interface AWEHPSkylightUIConfig : NSObject
@property (nonatomic) q layoutType;
@property (nonatomic) double height;
@property (nonatomic) double overlappingHostTopHeight;
- (double)overlappingHostTopHeight;
- (void)setOverlappingHostTopHeight:;
- (BOOL)isEqualConfig:;
- (void)setLayoutType:;
- (long long)layoutType;
- (id)init;
- (void)setHeight:;
- (id)description;
- (double)height;
- (id)copyWithZone:;
@end
