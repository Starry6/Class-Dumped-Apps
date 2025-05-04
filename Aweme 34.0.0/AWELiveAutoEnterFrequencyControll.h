@interface AWELiveAutoEnterFrequencyControll : NSObject
@property (nonatomic) NSNumber roomId;
- (id)roomId;
- (void)setRoomId:;
- (id)initWithRoomId:;
- (void).cxx_destruct;
+ (BOOL)enableAutoEnter:;
+ (BOOL)canStartAutoEnterByStrongControl:;
+ (id)autoEnterConfig;
+ (void)weakFrequencyAction:roomID:anchorID:requestID:;
+ (BOOL)canStartAutoEnter:with:;
+ (void)updateAfterAutoEnter;
+ (void)negativeAction:roomID:anchorID:requestID:;
+ (long long)getStayTimeWith:;
+ (void)updateGuideRoomIdList:;
@end
