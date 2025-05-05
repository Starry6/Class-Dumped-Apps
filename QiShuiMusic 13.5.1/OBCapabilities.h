@interface OBCapabilities : NSObject
@property (nonatomic) BOOL preventURLDataDetection;
@property (nonatomic) BOOL preventOpeningSafari;
- (BOOL)isWAPI;
- (BOOL)preventURLDataDetection;
- (void)setPreventURLDataDetection:;
- (BOOL)preventOpeningSafari;
- (void)setPreventOpeningSafari:;
+ (id)sharedCapabilities;
@end
