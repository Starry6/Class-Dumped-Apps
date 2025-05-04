@interface AWEFeedXBridgeGetLocalAwemeProgressItems : BDXBridgeModel
@property (nonatomic) NSString awemeId;
@property (nonatomic) NSNumber playProgress;
@property (nonatomic) NSNumber lastModifiedTime;
- (void)setAwemeId:;
- (id)awemeId;
- (id)playProgress;
- (void)setLastModifiedTime:;
- (void)setPlayProgress:;
- (void).cxx_destruct;
- (id)lastModifiedTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
