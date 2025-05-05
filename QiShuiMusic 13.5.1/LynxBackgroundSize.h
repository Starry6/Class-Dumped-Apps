@interface LynxBackgroundSize : NSObject
@property (nonatomic) LynxPlatformLength value;
- (BOOL)isCover;
- (double)apply:currentValue:;
- (BOOL)isContain;
- (id)init;
- (void)setValue:;
- (id)initWithLength:;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isAuto;
@end
