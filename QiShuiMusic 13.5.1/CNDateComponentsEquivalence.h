@interface CNDateComponentsEquivalence : NSObject
+ (BOOL)canUnifyComponents:withComponents:;
+ (BOOL)isComponent:equivalentToComponent:;
+ (BOOL)isCalendar:equivalentToCalendar:;
@end
