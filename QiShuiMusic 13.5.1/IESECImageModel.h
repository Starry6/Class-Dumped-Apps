@interface IESECImageModel : MTLModel
@property (nonatomic) IESECURLModel urlModel;
@property (nonatomic) double roundCorner;
@property (nonatomic) NSString tintColor;
@property (nonatomic) IESECNativeImageModel nativeModel;
@property (nonatomic) IESECBorderConfig border;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setNativeModel:;
- (void)setRoundCorner:;
- (id)initWithURLModel:nativeModel:;
- (id)nativeModel;
- (double)roundCorner;
- (void)setUrlModel:;
- (id)urlModel;
- (id)border;
- (id)tintColor;
- (id)height;
- (id)width;
- (void).cxx_destruct;
- (void)setTintColor:;
- (void)setBorder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
