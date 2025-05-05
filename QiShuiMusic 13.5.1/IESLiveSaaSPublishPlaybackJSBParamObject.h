@interface IESLiveSaaSPublishPlaybackJSBParamObject : NSObject
@property (nonatomic) NSString roomID;
@property (nonatomic) NSString coverURL;
@property (nonatomic) NSString title;
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString fragmentID;
- (id)enterFrom;
- (id)fragmentID;
- (void)setEnterFrom:;
- (void)setFragmentID:;
- (void)setTitle:;
- (void)setDuration:;
- (id)title;
- (void).cxx_destruct;
- (id)duration;
- (id)roomID;
- (void)setRoomID:;
- (id)coverURL;
- (void)setCoverURL:;
@end
