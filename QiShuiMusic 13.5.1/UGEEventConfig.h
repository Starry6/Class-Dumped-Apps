@interface UGEEventConfig : NSObject
@property (nonatomic) BOOL UGEDEBUG;
- (BOOL)UGEDEBUG;
- (void)setUGEDEBUG:;
+ (id)defaultConfig;
@end
