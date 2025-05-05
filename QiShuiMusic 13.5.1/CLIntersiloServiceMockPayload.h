@interface CLIntersiloServiceMockPayload : NSObject
@property (nonatomic) BOOL inUse;
@property (nonatomic) XCTestExpectation expectation;
@property (nonatomic) NSDictionary inputDictionary;
@property (nonatomic) NSDictionary outputDictionary;
- (BOOL)inUse;
- (id)expectation;
- (void).cxx_destruct;
- (void)setInUse:;
- (id)initWithExpectation:inputDictionary:;
- (void)setOutput:forKey:;
- (id)inputDictionary;
- (id)outputDictionary;
@end
