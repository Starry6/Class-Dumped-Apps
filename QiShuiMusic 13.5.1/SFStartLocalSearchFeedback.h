@interface SFStartLocalSearchFeedback : SFStartSearchFeedback
@property (nonatomic) Q indexType;
@property (nonatomic) NSString originatingApp;
@property (nonatomic) SFPerformEntityQueryCommand entityQueryCommand;
@property (nonatomic) SFIndexState indexState;
- (id)originatingApp;
- (void)setEntityQueryCommand:;
- (void)setIndexType:;
- (id)initWithCoder:;
- (id)initWithInput:triggerEvent:indexType:;
- (void)encodeWithCoder:;
- (id)indexState;
- (void)setOriginatingApp:;
- (id)initWithInput:triggerEvent:searchType:indexType:queryId:;
- (void)setIndexState:;
- (unsigned long long)indexType;
- (id)entityQueryCommand;
- (void).cxx_destruct;
- (id)initWithEntityQueryCommand:triggerEvent:searchType:indexType:queryId:originatingApp:;
- (id)initWithInput:triggerEvent:searchType:indexType:queryId:originatingApp:;
- (id)initWithInput:triggerEvent:indexType:queryId:;
+ (BOOL)supportsSecureCoding;
@end
