@interface SNVGGishLaughterModelInput : NSObject
@property (nonatomic) MLMultiArray input1;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithInput1:;
- (id)input1;
- (void)setInput1:;
@end
