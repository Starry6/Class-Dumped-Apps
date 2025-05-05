@interface BXApplogCenter : NSObject
+ (void)onEvent:params:;
+ (void)onEventJsonString:json:;
+ (void)setApplogListener:;
@end
