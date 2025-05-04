@interface AWEECOMIMDetailNoticeMark : MTLModel
@property (nonatomic) q exposeCount;
@property (nonatomic) double exposeDisappearTime;
@property (nonatomic) q exposeDisappearCount;
@property (nonatomic) q closeCount;
@property (nonatomic) double closeDisappearTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)exposeCount;
- (void)setExposeCount:;
- (double)exposeDisappearTime;
- (void)setExposeDisappearTime:;
- (long long)exposeDisappearCount;
- (void)setExposeDisappearCount:;
- (long long)closeCount;
- (void)setCloseCount:;
- (double)closeDisappearTime;
- (void)setCloseDisappearTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
