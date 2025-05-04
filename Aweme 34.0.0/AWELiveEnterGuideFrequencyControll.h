@interface AWELiveEnterGuideFrequencyControll : NSObject
+ (unsigned long long)vsType;
+ (void)negativeWithRoomID:enterFrom:;
+ (void)updateAfterEnterGuide;
+ (void)updateGuideRoomIdList:enterFrom:isVSRoom:;
+ (id)guideClickNameWithShowType:guideType:;
+ (id)guideNameWithType:;
+ (BOOL)canStartEnterGuideWithRoomID:enterFrom:isVSRoom:;
+ (BOOL)disableStartEnterGuideWithRoomID:enterFrom:isVSRoom:;
+ (BOOL)enableFrequency;
+ (double)limitEnterGuideSecond;
+ (long long)maxIgnoreEnterRoomTimes;
+ (unsigned long long)type;
+ (long long)waitDuration;
@end
