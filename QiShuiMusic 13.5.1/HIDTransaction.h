@interface HIDTransaction : NSObject
@property (nonatomic) q direction;
- (long long)direction;
- (void)setDirection:;
- (void)dealloc;
- (id)description;
- (id)initWithDevice:;
- (BOOL)commitElements:error:;
- (BOOL)commitElements:error:timeout:callback:;
@end
