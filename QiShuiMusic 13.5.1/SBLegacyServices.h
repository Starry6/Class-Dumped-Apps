@interface SBLegacyServices : NSObject
+ (void)_configure;
+ (void)start;
+ (id)workloop;
+ (void)checkInPorts;
+ (void)setFunction:forSymbol:;
@end
