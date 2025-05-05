@interface MIORangeAsValue : NSValue
- (void)getValue:;
- (id)objCType;
- (id)MIORangeValue;
+ (id)valueWithMIORange:;
@end
