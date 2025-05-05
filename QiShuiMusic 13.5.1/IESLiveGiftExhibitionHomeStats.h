@interface IESLiveGiftExhibitionHomeStats : IESLivePBBaseMessage
@property (nonatomic) NSInteger lightedNum;
@property (nonatomic) NSInteger unlightedNum;
@property (nonatomic) NSString exhibitionEntranceURL;
+ (id)descriptor;
@end
