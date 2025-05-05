@interface IESIMMixVideoStatusModel : IESIMBaseApiModel
@property (nonatomic) q status;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL isViewed;
@property (nonatomic) BOOL isLocatedCell;
@property (nonatomic) BOOL currentPlayTip;
- (void)setIsCollected:;
- (BOOL)currentPlayTip;
- (BOOL)isCollected;
- (BOOL)isLocatedCell;
- (BOOL)isViewed;
- (void)setCurrentPlayTip:;
- (void)setIsLocatedCell:;
- (void)setIsViewed:;
- (void)setStatus:;
- (long long)status;
+ (id)JSONKeyPathsByPropertyKey;
@end
