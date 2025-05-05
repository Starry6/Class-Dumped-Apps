@interface IESLiveMicInfoItem : NSObject
@property (nonatomic) NSString idStr;
@property (nonatomic) q currentRoundMicCount;
@property (nonatomic) q goldenMicCount;
@property (nonatomic) BOOL isSinging;
@property (nonatomic) HTSLiveUser titleSponsor;
- (long long)currentRoundMicCount;
- (long long)goldenMicCount;
- (BOOL)isSinging;
- (void)setCurrentRoundMicCount:;
- (void)setGoldenMicCount:;
- (void)setIsSinging:;
- (void)setTitleSponsor:;
- (id)titleSponsor;
- (void).cxx_destruct;
- (id)idStr;
- (void)setIdStr:;
@end
