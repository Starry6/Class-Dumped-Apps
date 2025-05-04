@interface AWETeenAntiAddictionTimeZoneService : NSObject
@property (nonatomic) NSTimeZone currentTimeZone;
@property (nonatomic) BOOL timeZoneTrusted;
@property (nonatomic) BOOL hasChinaSimCard;
@property (nonatomic) BOOL isOverseaIP;
@property (nonatomic) BOOL isOverseaUser;
- (BOOL)timeZoneTrusted;
- (BOOL)isOverseaUser;
- (BOOL)p_hasChinaSimCard;
- (BOOL)hasChinaSimCard;
- (BOOL)isOverseaIP;
- (BOOL)p_isChinaCountryCode:;
- (void)setIPOversea:;
- (void)setHasChinaSimCard:;
- (void)setIsOverseaIP:;
- (void)setTimeZoneTrusted:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)currentTimeZone;
- (void)setCurrentTimeZone:;
@end
