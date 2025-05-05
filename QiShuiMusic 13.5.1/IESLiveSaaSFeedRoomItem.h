@interface IESLiveSaaSFeedRoomItem : BDDynamicModel
@property (nonatomic) NSValue preferredCoverSize;
@property (nonatomic) NSArray coverURLStrings;
@property (nonatomic) NSArray roomLabelURLStrings;
@property (nonatomic) NSArray contentTagURLStrings;
@property (nonatomic) NSArray operationTagURLStrings;
@property (nonatomic) IESLiveSaaSUserModel anchorModel;
@property (nonatomic) BOOL isAudioLive;
@property (nonatomic) BOOL isLiveEnd;
@property (nonatomic) BOOL isDHMediaRoom;
@property (nonatomic) BOOL canShowWatchCount;
@property (nonatomic) BOOL canShowLocation;
@property (nonatomic) BOOL canShowRedenvelope;
@property (nonatomic) NSString title;
@property (nonatomic) NSString location;
@property (nonatomic) NSString watchCount;
@property (nonatomic) NSString totalWatchCount;
@property (nonatomic) NSString trackReference;
@property (nonatomic) q trackSource;
@property (nonatomic) NSString layoutStyleRepr;
@property (nonatomic) Q layout;
@property (nonatomic) NSString subTrack;
@property (nonatomic) q subTrackSource;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
- (id)totalWatchCount;
- (void)setTotalWatchCount:;
- (void).cxx_destruct;
@end
