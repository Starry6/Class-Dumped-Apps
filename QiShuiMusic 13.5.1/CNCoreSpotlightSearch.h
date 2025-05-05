@interface CNCoreSpotlightSearch : NSObject
+ (id)executeQuery:protectionClass:bundleID:fetchAttributes:error:;
+ (id)_runQuery:timeout:error:;
@end
