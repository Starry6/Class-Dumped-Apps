@interface LPContactsBadgeStyle : NSObject
@property (nonatomic) double size;
@property (nonatomic) double margin;
@property (nonatomic) double iconOffset;
@property (nonatomic) q location;
@property (nonatomic) BOOL useShadow;
- (id)init;
- (double)margin;
- (void)setMargin:;
- (long long)location;
- (void)setLocation:;
- (void)setSize:;
- (double)size;
- (double)iconOffset;
- (void)setIconOffset:;
- (BOOL)useShadow;
- (void)setUseShadow:;
@end
