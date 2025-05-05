@interface WKModalContainerClassifierInput : NSObject
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTokenizer:rawInput:;
@end
