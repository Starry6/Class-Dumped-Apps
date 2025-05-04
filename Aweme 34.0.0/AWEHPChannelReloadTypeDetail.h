@interface AWEHPChannelReloadTypeDetail : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString subType;
@property (nonatomic) NSString componentType;
@property (nonatomic) NSString componentID;
@property (nonatomic) NSDictionary bizTrackParams;
- (id)initWithType:subType:;
- (id)bizTrackParams;
- (void)setBizTrackParams:;
- (id)initWithType:subType:componentType:componentID:;
- (id)componentType;
- (unsigned long long)type;
- (id)subType;
- (void).cxx_destruct;
- (id)componentID;
@end
