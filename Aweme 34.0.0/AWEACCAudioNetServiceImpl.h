@interface AWEACCAudioNetServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateAudioTrackWithId:audiotrackUri:params:completion:;
- (void)updateAudioTrackWithId:audiotrackUri:completion:;
- (void)updateAudioTrackWithId:audiotrackUris:vids:params:completion:;
@end
