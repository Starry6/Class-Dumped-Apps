@interface CVNLPCaptionRuntimeReplacements : NSObject
@property (nonatomic) NSString replacementKey;
@property (nonatomic) NSString replacementValue;
@property (nonatomic) double replacementProb;
@property (nonatomic) NSNumber genderOption;
- (void).cxx_destruct;
- (id)genderOption;
- (id)initWithKey:value:prob:genderOption:;
- (id)replacementKey;
- (id)replacementValue;
- (double)replacementProb;
@end
