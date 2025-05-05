@interface BDTuringTVTracker : NSObject
+ (id)changeVerifyMethodByType:;
+ (void)trackerEvent:params:;
+ (void)trackerShowTwiceVerifyWithScene:type:aid:data:;
+ (void)trackerTwiceVerifySubmitWithScene:type:aid:result:;
@end
