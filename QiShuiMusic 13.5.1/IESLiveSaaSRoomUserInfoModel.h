@interface IESLiveSaaSRoomUserInfoModel : BDDynamicModel
@property (nonatomic) Q feedLayoutStyle;
@property (nonatomic) NSString feedLayoutTrackString;
@property (nonatomic) NSString trackReference;
@property (nonatomic) NSString commonLabelList;
@property (nonatomic) q enterReference;
@property (nonatomic) BOOL swipeEnterRoom;
@property (nonatomic) NSString subTrack;
@property (nonatomic) q subTrackSource;
@property (nonatomic) NSDictionary trackMeta;
- (id)commonLabelList;
- (id)feedLayoutTrackString;
- (BOOL)isValidInfo;
- (void)setCommonLabelList:;
- (void)setFeedLayoutTrackString:;
- (void)setSubTrackSource:;
- (long long)subTrackSource;
- (void).cxx_destruct;
@end
