@interface IESLiveInteractionCropData : MTLModel
@property (nonatomic) NSNumber cropH;
@property (nonatomic) NSNumber cropW;
@property (nonatomic) NSNumber cropX;
@property (nonatomic) NSNumber cropY;
@property (nonatomic) NSNumber strideH;
@property (nonatomic) NSNumber strideW;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)strideW;
- (id)strideH;
- (id)cropH;
- (id)cropW;
- (void)setCropH:;
- (void)setCropW:;
- (void)setCropX:;
- (void)setCropY:;
- (void)setStrideH:;
- (void)setStrideW:;
- (void).cxx_destruct;
- (id)cropX;
- (id)cropY;
+ (id)JSONKeyPathsByPropertyKey;
@end
