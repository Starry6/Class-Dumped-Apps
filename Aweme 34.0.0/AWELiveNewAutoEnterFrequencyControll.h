@interface AWELiveNewAutoEnterFrequencyControll : NSObject
@property (nonatomic) NSDictionary autoEnterConfig;
- (id)autoEnterConfig;
- (void)setAutoEnterConfig:;
- (void).cxx_destruct;
+ (long long)countDownDuration:;
+ (id)autoEnterConfig;
+ (id)getAutoEnterConfigParams:enterFrom:;
+ (void)updateGuideRoomIdList:enterFrom:model:configDict:;
+ (BOOL)isliveTabWithEnterFrom:;
+ (id)frequencyConfig:;
+ (void)updateAfterAutoEnter:;
+ (BOOL)useSildeOut:;
+ (void)negativeAction:roomID:anchorID:requestID:enterFrom:configDict:;
+ (id)autoEnterBadFeedCountWithParams:;
+ (long long)waitDuration:;
+ (BOOL)canStartAutoEnterWithRoom:enterFrom:configDict:;
+ (BOOL)disableStartAutoEnterWithRoomID:enterFrom:configDict:;
+ (id)disableAutoEnterTimeWithParams:;
@end
