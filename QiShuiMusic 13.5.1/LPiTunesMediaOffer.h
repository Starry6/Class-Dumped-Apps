@interface LPiTunesMediaOffer : NSObject
@property (nonatomic) NSURL previewURL;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL hasAudio;
@property (nonatomic) BOOL hasVideo;
- (id)initWithDictionary:;
- (BOOL)hasVideo;
- (id)type;
- (id)previewURL;
- (void).cxx_destruct;
- (BOOL)hasAudio;
+ (BOOL)hasAudioForOffer:;
+ (BOOL)hasVideoForOffer:;
+ (id)previewURLForOffer:;
+ (id)typeForOffer:;
@end
