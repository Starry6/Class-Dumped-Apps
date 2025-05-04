@interface AWEStudioImageDetectPackedResultImpl : NSObject
@property (nonatomic) <AWEStudioImageDetectInputData> inputData;
@property (nonatomic) Q currentStep;
@property (nonatomic) NSArray items;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCurrentStep:;
- (id)initWithItems:;
- (unsigned long long)currentStep;
- (id)items;
- (id)initWithError:;
- (void).cxx_destruct;
- (id)error;
- (id)inputData;
- (void)setInputData:;
@end
