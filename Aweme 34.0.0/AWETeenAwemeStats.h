@interface AWETeenAwemeStats : MTLModel
@property (nonatomic) q minorSubscribedStatus;
@property (nonatomic) AWEMinorAlbum minorAlbum;
@property (nonatomic) q minorBlockStatus;
@property (nonatomic) q minorHeadAuditStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMinorAlbum:;
- (long long)minorSubscribedStatus;
- (id)minorAlbum;
- (long long)minorBlockStatus;
- (void)setMinorBlockStatus:;
- (void)setMinorSubscribedStatus:;
- (long long)minorHeadAuditStatus;
- (void)setMinorHeadAuditStatus:;
- (id)init;
- (void).cxx_destruct;
+ (id)minorAlbumJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
