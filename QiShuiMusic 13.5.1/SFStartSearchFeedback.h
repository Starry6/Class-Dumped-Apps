@interface SFStartSearchFeedback : SFFeedback
@property (nonatomic) NSString uuid;
@property (nonatomic) NSString input;
@property (nonatomic) Q triggerEvent;
@property (nonatomic) Q searchType;
- (unsigned long long)searchType;
- (id)input;
- (void)setSearchType:;
- (void)setTriggerEvent:;
- (id)uuid;
- (unsigned long long)triggerEvent;
- (void)setUuid:;
- (void)setInput:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithInput:triggerEvent:;
- (id)initWithInput:triggerEvent:queryId:;
+ (BOOL)supportsSecureCoding;
@end
