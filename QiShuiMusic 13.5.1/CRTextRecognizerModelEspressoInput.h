@interface CRTextRecognizerModelEspressoInput : NSObject
@property (nonatomic) {vImage_Buffer=^vQQQ} img_input;
@property (nonatomic) Q batchSize;
@property (nonatomic) NSArray textFeatureInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (unsigned long long)batchSize;
- (void)setBatchSize:;
- (void).cxx_destruct;
- (id)textFeatureInfo;
- (void)setTextFeatureInfo:;
- (id)img_input;
- (void)setImg_input:;
- (id)initWithImg_input:batchSize:featureInfo:;
@end
