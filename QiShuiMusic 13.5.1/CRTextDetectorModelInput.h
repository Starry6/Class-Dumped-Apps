@interface CRTextDetectorModelInput : NSObject
@property (nonatomic) ^{__CVBuffer=} data;
@property (nonatomic) NSSet featureNames;
- (id)data;
- (id)featureValueForName:;
- (id)featureNames;
- (id)initWithData:;
- (void)setData:;
@end
