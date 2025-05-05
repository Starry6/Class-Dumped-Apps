@interface FLEXArgumentInputViewFactory : NSObject
+ (id)argumentInputViewForTypeEncoding:;
+ (id)argumentInputViewForTypeEncoding:currentValue:;
+ (Class)argumentInputViewSubclassForTypeEncoding:currentValue:;
+ (BOOL)canEditFieldWithTypeEncoding:currentValue:;
+ (void)registerFieldNames:forTypeEncoding:;
@end
