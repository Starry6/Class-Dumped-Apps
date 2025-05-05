@interface IMCKPadding : NSObject
+ (id)_randomDataWithLength:;
+ (long long)_paddingForType:originalSize:error:;
+ (id)paddingForMessageOfSize:;
@end
