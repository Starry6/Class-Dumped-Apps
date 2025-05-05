@interface CNHandleStringClassifier : NSObject
@property (nonatomic) <_CNHandleStringClassificationStrategy> classificationStrategy;
- (id)initWithClassificationQuality:;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)classifyHandleString:builder:;
- (id)initWithClassificationStrategy:;
- (id)classificationStrategy;
- (unsigned long long)typeOfHandleString:;
+ (id)classificationOfHandleStrings:classificationQuality:;
+ (id)classificationOfHandleStrings:;
+ (id)classificationStrategyForQuality:;
@end
