@interface CBCE1Input : NSObject
@property (nonatomic) MLMultiArray input;
@property (nonatomic) NSSet featureNames;
- (id)input;
- (id)initWithInput:;
- (id)featureValueForName:;
- (void)setInput:;
- (id)featureNames;
- (void).cxx_destruct;
@end
