@interface NSTextGraphicsContextProvider : NSObject
+ (Class)textGraphicsContextClass;
+ (BOOL)textGraphicsContextProviderClassRespondsToColorQuery;
+ (Class)textGraphicsContextProviderClass;
+ (Class)__defaultColorClass;
+ (void)setTextGraphicsContextClass:;
+ (void)setCurrentTextGraphicsContext:duringBlock:;
+ (void)setTextGraphicsContextProviderClass:;
@end
