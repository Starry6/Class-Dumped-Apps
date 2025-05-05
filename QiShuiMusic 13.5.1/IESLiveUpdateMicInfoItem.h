@interface IESLiveUpdateMicInfoItem : NSObject
@property (nonatomic) q id_p;
@property (nonatomic) NSInteger targetType;
@property (nonatomic) q newestMicCount;
- (long long)newestMicCount;
- (void)setNewestMicCount:;
- (int)targetType;
- (void)setTargetType:;
- (long long)id_p;
- (void)setId_p:;
@end
