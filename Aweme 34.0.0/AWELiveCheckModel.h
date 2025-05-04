@interface AWELiveCheckModel : NSObject
@property (nonatomic) NSNumber userID;
@property (nonatomic) AWELiveVideoFeedModel model;
@property (nonatomic) NSDate timestamp;
- (id)initWithUserID:AWELiveVideoFeedModel:;
- (id)timestamp;
- (void)setModel:;
- (id)userID;
- (void)setTimestamp:;
- (id)model;
- (void).cxx_destruct;
- (void)setUserID:;
@end
