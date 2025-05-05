@interface IESLatchTemplateOutput : NSObject
@property (nonatomic) NSMutableDictionary results;
@property (nonatomic) NSDictionary apiPath;
@property (nonatomic) Q apiPathPattern;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)apiPath;
- (void)addRequestModel:;
- (unsigned long long)apiPathPattern;
- (id)requestModels;
- (void)setApiPath:;
- (void)setApiPathPattern:;
- (void)merge:;
- (id)results;
- (void).cxx_destruct;
- (void)setResults:;
@end
