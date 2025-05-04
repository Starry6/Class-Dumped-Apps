@interface AWEIMSkylightSnapShotModel : NSObject
@property (nonatomic) NSArray businessList;
@property (nonatomic) NSArray friendList;
@property (nonatomic) AWEIMSkylightFriendWholeDotModel whloeDotModel;
@property (nonatomic) double now;
- (id)businessList;
- (void)setBusinessList:;
- (id)friendList;
- (void)setFriendList:;
- (void)setWhloeDotModel:;
- (id)transformToSectionData;
- (id)whloeDotModel;
- (double)now;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setNow:;
- (id)initWithCoder:;
@end
