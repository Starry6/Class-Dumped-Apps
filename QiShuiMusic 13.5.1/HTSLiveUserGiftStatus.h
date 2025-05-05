@interface HTSLiveUserGiftStatus : IESLivePBBaseMessage
@property (nonatomic) NSString playId;
@property (nonatomic) NSString gameId;
@property (nonatomic) NSString hint;
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger focusIndex;
@property (nonatomic) NSInteger loginDays;
+ (id)descriptor;
@end
