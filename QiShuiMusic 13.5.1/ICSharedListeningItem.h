@interface ICSharedListeningItem : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString mediaIdentifier;
@property (nonatomic) BOOL isAutoPlayItem;
@property (nonatomic) ICLiveLinkIdentity contributorIdentity;
@property (nonatomic) NSDictionary playParams;
- (id)identifier;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (id)copyWithZone:;
- (id)mediaIdentifier;
- (BOOL)isAutoPlayItem;
- (id)initWithProtobuf:identity:;
- (id)_playParamsForPlaybackItemProto:;
- (id)contributorIdentity;
- (id)playParams;
+ (id)itemWithMediaIdentifier:;
@end
