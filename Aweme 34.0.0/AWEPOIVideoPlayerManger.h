@interface AWEPOIVideoPlayerManger : NSObject
@property (nonatomic) BOOL videoMute;
@property (nonatomic) NSMutableDictionary groupVideoPauseMap;
@property (nonatomic) NSMutableDictionary groupProgressMap;
- (BOOL)videoMute;
- (void)setVideoMute:;
- (void)syncVideoMute:;
- (BOOL)getVideoMuteStatus;
- (id)groupVideoPauseMap;
- (void)syncGroupDataWithGroup:key:data:map:;
- (id)getGroupDataWithGroup:key:defaultData:map:;
- (id)groupProgressMap;
- (void)syncDefaultVideoPause:pause:;
- (BOOL)getDefaultVideoPause:;
- (void)syncDefaultProgress:time:;
- (double)getDefaultProgress:;
- (void)setGroupVideoPauseMap:;
- (void)setGroupProgressMap:;
- (void).cxx_destruct;
+ (id)sharedManger;
@end
