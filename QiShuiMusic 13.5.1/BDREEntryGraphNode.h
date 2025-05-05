@interface BDREEntryGraphNode : BDREGraphNode
@property (nonatomic) NSString identifier;
@property (nonatomic) NSMutableDictionary map;
@property (nonatomic) BOOL isRegisterParam;
@property (nonatomic) BOOL isCollection;
- (BOOL)isRegisterParam;
- (void)connectToConstNode:;
- (BOOL)isCollection;
- (void)setIsCollection:;
- (void)setIsRegisterParam:;
- (void)travelWithFootPrint:;
- (id)valueWithFootPrint:;
- (id)identifier;
- (void).cxx_destruct;
- (id)map;
- (void)setMap:;
- (id)initWithIdentifier:;
- (void)setIdentifier:;
@end
