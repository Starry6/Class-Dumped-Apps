@interface AWEInteractNoticeLabelTrackManager : NSObject
@property (nonatomic) NSString labelTrack;
@property (nonatomic) NSString commentID;
@property (nonatomic) NSString userID;
- (id)commentID;
- (void)setCommentID:;
- (void)setLabelTrack:;
- (id)labelTrack;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
+ (id)sharedManager;
@end
