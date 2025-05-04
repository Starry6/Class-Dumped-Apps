@interface AWEProfileAspectsTracker : NSObject
+ (id)applyAspectsForEvent:profileContext:logExtraDict:;
+ (id)applyAspectsForEvent:profileContext:logExtraDict:appendBlock:;
@end
