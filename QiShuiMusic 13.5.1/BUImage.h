@interface BUImage : BUInterfaceBaseObject
@property (nonatomic) NSObject<BUImageMediationProtocol> mediation;
@property (nonatomic) NSString imageURL;
@property (nonatomic) NSString image_key;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) float duration;
- (id)image_key;
- (id)mediation;
- (float)height;
- (void)setDuration:;
- (float)width;
- (void).cxx_destruct;
- (float)duration;
- (id)imageURL;
@end
