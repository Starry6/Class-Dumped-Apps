@interface AWENearbyC2SearchParamsModel : NSObject
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString groupId;
@property (nonatomic) NSString roomID;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) q awemeType;
@property (nonatomic) q enterType;
- (long long)awemeType;
- (void)setEnterFrom:;
- (id)aweme;
- (void)setAweme:;
- (id)enterFrom;
- (void)setAwemeType:;
- (void)setGroupId:;
- (id)groupId;
- (id)roomID;
- (void).cxx_destruct;
- (void)setRoomID:;
- (long long)enterType;
- (void)setEnterType:;
@end
